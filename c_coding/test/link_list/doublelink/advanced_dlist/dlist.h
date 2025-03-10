
#ifndef __CMS_DLIST_H__
#define __CMS_DLIST_H__


/*!\file cms_dlist.h
 * \brief Header file for doubly linked list manipulation functions.
 *
 * These functions implement doubly linked list.
 *
 */

/*! \brief structure that must be placed at the begining of any structure
 *         that is to be put into the linked list.
 */
typedef struct dlist_node {
	struct dlist_node *next;   /**< next pointer */
	struct dlist_node *prev;   /**< previous pointer */
} DlistNode;

/** Initialize a field in a structure that is used as the head of a dlist */
#define DLIST_HEAD_IN_STRUCT_INIT(field) do {\
      (field).next = &(field);               \
      (field).prev = &(field);               \
   } while (0)

/** Initialize a standalone variable that is the head of a dlist */
#define DLIST_HEAD_INIT(name) { &(name), &(name) }

/** Declare a standalone variable that is the head of the dlist */
#define DLIST_HEAD(name) \
	struct dlist_node name = DLIST_HEAD_INIT(name)

/** Return true if the dlist is empty.
 *
 * @param head pointer to the head of the dlist.
 */
static inline int dlist_empty(const struct dlist_node *head)
{
	return ((head->next == head) && (head->prev == head));
}


/** add a new entry after an existing list element
 *
 * @param new       new entry to be added
 * @param existing  list element to add the new entry after.  This could
 *                  be the list head or it can be any element in the dlist.
 *
 */
static inline void dlist_append(struct dlist_node *new_node, struct dlist_node *existing)
{
   existing->next->prev = new_node;
   new_node->next = existing->next;
   new_node->prev = existing;
   existing->next = new_node;
}

/** add a new entry in front of an existing list element
 *
 * @param new       new entry to be added
 * @param existing  list element to add the new entry in front of.  This could
 *                  be the list head or it can be any element in the dlist.
 *
 */
static inline void dlist_prepend(struct dlist_node *new_node, struct dlist_node *existing)
{
   existing->prev->next = new_node;
   new_node->next = existing;
   new_node->prev = existing->prev;
   existing->prev = new_node;
}

/**
 * list_replace - replace old entry by new one
 * @old : the element to be replaced
 * @new : the new element to insert
 *
 * If @old was empty, it will be overwritten.
 */
static inline void dlist_replace(struct dlist_node *old,
				struct dlist_node *new)
{
	new->next = old->next;
	new->next->prev = new;
	new->prev = old->prev;
	new->prev->next = new;
}

/** Unlink the specified entry from the list.
 *  This function does not free the entry.  Caller is responsible for
 *  doing that if applicable.
 *
 * @param entry existing dlist entry to be unlinked from the dlist.
 */
static inline void dlist_unlink(struct dlist_node *entry)
{
   entry->next->prev = entry->prev;
   entry->prev->next = entry->next;

	entry->next = 0;
	entry->prev = 0;
}

/** Return byte offset of the specified member.
 *
 * This is defined in stddef.h for MIPS, but not defined
 * on LINUX desktop systems.  Play it safe and just define
 * it here for all build types.
 */
#undef offsetof
#define offsetof(TYPE, MEMBER) ((size_t) &((TYPE *)0)->MEMBER)


/** cast a member of a structure out to the containing structure
 *
 * @ptr:	the pointer to the member.
 * @type:	the type of the container struct this is embedded in.
 * @member:	the name of the member within the struct.
 *
 */
 #ifndef container_of
#define container_of(ptr, type, member) ({			\
        const typeof( ((type *)0)->member ) *__mptr = (ptr);	\
        (type *)( (char *)__mptr - offsetof(type,member) );})
#endif

#define dlist_entry(ptr, type, member) \
	container_of(ptr, type, member)

/** Create a for loop over all entries in the dlist.
 *
 * @param pos A variable that is the type of the structure which
 *            contains the DlistNode.
 * @param head Pointer to the head of the dlist.
 * @param member The field name of the DlistNode field in the
 *               containing structure.
 *
 */
#define dlist_for_each_entry(pos, head, member)				\
	for (pos = dlist_entry((head)->next, typeof(*pos), member);	\
	     &pos->member != (head); 					\
	     pos = dlist_entry(pos->member.next, typeof(*pos), member))

#ifndef list_for_each
#define list_for_each(pos, head) \
		for (pos = (head)->next; pos != (head); pos = pos->next)
#endif

#ifndef list_for_each_safe
#define list_for_each_safe(pos, n, head) \
				for (pos = (head)->next, n = pos->next; pos != (head); \
					pos = n, n = pos->next)
#endif
#endif  /*__CMS_DLIST_H__ */

