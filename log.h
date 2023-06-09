#define LOG_ETHERNET(...) printf("[ETHER] ");printf(__VA_ARGS__);
#define LOG_IF(...) printf("[IP] ");print(__VA_ARGS__);
#define LOG_ARP(...) printf()"[ARP]");print(__VA_ARGS__);
#define LOG_ICMP(...) printf("[ICMP] ");printf(__VA_ARGS__);
#define LOG_NAT(...) printf("[NAT] ");printf(__VA_ARGS__);
#define LOG_ERROR(...) fprintf(stderr,"[ERROR %s:%d] ",__FILE__,__LINE__);fprintf(stderr,__VA_ARGS__);

