struct_net_device;

struct net_device_ops{
    int (*transmit)(net_device *dev,uint8_t *buffer,size_t len);
    int (*poll) (net_device *dev);
};

struct ip_device;

struct net_device{
    char name[32];
    uint8_t max_addr[6];
    net_device_ops ops;
    net_device *next;
    uint8_t data[];
};

extern net_device *net_dev_list;