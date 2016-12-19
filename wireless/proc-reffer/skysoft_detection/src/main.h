#ifndef _MAIN_H_
#define _MIAN_H_

void sigtimeout();
void cleanTimer();
int init_timer();
int check_dns();
int exec_cmd(char *cmd, char *val);
void set_reboot_resaon();

#define ON_OFF   "detection.@detect[0].enable"
#define TIMEOUT  "detection.@detect[0].timeout"
#define THREMEM  "detection.@detect[0].mem_limit"
#define THRECPU  "detection.@detect[0].cpu_limit"
#define THRETRY  "detection.@detect[0].retry"
#define BOOTRES  "detection.@detect[0].reboot_reason"
#define BOOTTIME  "detection.@detect[0].reboot_time"
#define CURCHAN2  "detection.@curchan[0].2_4G"
#define CURCHAN5  "detection.@curchan[0].5G"
#define GETR     "cat /proc/cmdline | awk -F 'rea=' '{print $2}'"
#define GETT     "cat /proc/cmdline | awk -F 'time=' '{print $2}'"
#define SAVER    "rebootInfo.@record[-1].reason"
#define SAVET    "rebootInfo.@record[-1].time"
#define REBOOT5     "reboot -s puma5"
#define REBOOT6     "reboot -s puma6"
#define REBOOT7     "reboot -s puma7"
#define CPU_INFO "top -n 1 | awk  '/CPU/{print $8}'"
#define MEM_INFO "top -n 1 | awk  '/Mem/{print $4}'"
#define DNS_INFO "ubus call network.interface.wan status | awk -F '\"' '/dns-server/{getline; print $2; exit }'"
#define DNS_PING "ping %s -t %s -s %s -w 4 -q | awk '/packets/{print $7}'"
#define tmpFILE "/tmp/rebootreason"
#define tmpPID "/proc/notifipid"
#define creatFILE "touch /tmp/rebootreason"

#define get24G_bak "cat /proc/curchan | awk '{print$2}'"
#define get5G_bak "cat /proc/curchan | awk '{print$4}'"

#define get24G "iwlist ath1 channel | grep 'Current Frequency:' | sed 's/\\(.*\\)(\\(.*\\))\\(.*\\)/\\2/g' | awk  '{print $2}'"
#define get5G "iwlist ath0 channel | grep 'Current Frequency:' | sed 's/\\(.*\\)(\\(.*\\))\\(.*\\)/\\2/g' | awk  '{print $2}'"

#define IPDEST "detection.@detect[0].ipdest"
#define TTL "detection.@detect[0].ttl"
#define SIZE "detection.@detect[0].size"

//reboot reason
#define puma0 "bootloader"
#define puma1 "User reboot"
#define puma2 "Recovery"
#define puma3 "Unknown"
#define puma4 "System panic"
#define puma5 "CPU not enough"
#define puma6 "MEM not enough"
#define puma7 "PING barrier"
#define puma8 "FW update"
#define puma9 "Config restore"






#endif
