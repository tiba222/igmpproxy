#include <netinet/in_systm.h>
#include <netinet/ip_mroute.h>
#include <netinet/ip.h>
#include <netinet/igmp.h>

#define IGMP_MEMBERSHIP_QUERY IGMP_HOST_MEMBERSHIP_QUERY
#define IGMP_V1_MEMBERSHIP_REPORT IGMP_v1_HOST_MEMBERSHIP_REPORT
#define IGMP_V2_MEMBERSHIP_REPORT IGMP_v2_HOST_MEMBERSHIP_REPORT
#define IGMP_V3_MEMBERSHIP_REPORT 0x22
#define IGMP_V2_LEAVE_GROUP IGMP_HOST_LEAVE_MESSAGE

#define INADDR_ALLIGMPV3_GROUP ((in_addr_t) 0xe0000016)

static inline unsigned short ip_data_len(const struct ip *ip)
{
    return ip->ip_len;
}

static inline void ip_set_len(struct ip *ip, unsigned short len)
{
    ip->ip_len = len;
}
