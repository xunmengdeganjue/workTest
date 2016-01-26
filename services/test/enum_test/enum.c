#include<stdio.h>

enum odhcp6c_ia_mode {
        IA_MODE_NONE,
        IA_MODE_TRY,
        IA_MODE_FORCE,
};

int main(){


	enum odhcp6c_ia_mode ia_na_mode = IA_MODE_TRY;
	enum odhcp6c_ia_mode ia_pd_mode = IA_MODE_NONE;


	printf("the ia_na_mode is %d\n",ia_na_mode);


}
