
-解决在kernel-3.14.77上iwevent无法查询客户端列表的问题
问题原因：struct ieee80211req_sta_info 在新版本中增加了
  u_int32_t       awake_time;             /* time is active mode */
        u_int32_t       ps_time;                /* time in power save mode */
        等，导致解析数据出错。
        
2017-09-25