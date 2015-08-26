/*
 * Note: this file originally auto-generated by mib2c using
 *  : generic-table-constants.m2c,v 1.5 2005/07/15 22:41:16 rstory Exp $
 *
 * $Id: udpEndpointTable_constants.h,v 1.1 2008/06/23 10:52:17 michael Exp $
 */
#ifndef UDPENDPOINTTABLE_CONSTANTS_H
#define UDPENDPOINTTABLE_CONSTANTS_H

#ifdef __cplusplus
extern          "C" {
#endif


    /*
     * column number definitions for table udpEndpointTable 
     */
#define UDPENDPOINTTABLE_OID              1,3,6,1,2,1,7,7

#define COLUMN_UDPENDPOINTLOCALADDRESSTYPE         1

#define COLUMN_UDPENDPOINTLOCALADDRESS         2

#define COLUMN_UDPENDPOINTLOCALPORT         3

#define COLUMN_UDPENDPOINTREMOTEADDRESSTYPE         4

#define COLUMN_UDPENDPOINTREMOTEADDRESS         5

#define COLUMN_UDPENDPOINTREMOTEPORT         6

#define COLUMN_UDPENDPOINTINSTANCE         7

#define COLUMN_UDPENDPOINTPROCESS         8


#define UDPENDPOINTTABLE_MIN_COL   COLUMN_UDPENDPOINTPROCESS
#define UDPENDPOINTTABLE_MAX_COL   COLUMN_UDPENDPOINTPROCESS


    /*
     * NOTES on enums
     * ==============
     *
     * Value Mapping
     * -------------
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them
     * below. For example, a boolean flag (1/0) is usually represented
     * as a TruthValue in a MIB, which maps to the values (1/2).
     *
     */
/*************************************************************************
 *************************************************************************
 *
 * enum definitions for table udpEndpointTable
 *
 *************************************************************************
 *************************************************************************/

/*************************************************************
 * constants for enums for the MIB node
 * udpEndpointLocalAddressType (InetAddressType / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef INETADDRESSTYPE_ENUMS
#define INETADDRESSTYPE_ENUMS

#define INETADDRESSTYPE_UNKNOWN  0
#define INETADDRESSTYPE_IPV4  1
#define INETADDRESSTYPE_IPV6  2
#define INETADDRESSTYPE_IPV4Z  3
#define INETADDRESSTYPE_IPV6Z  4
#define INETADDRESSTYPE_DNS  16

#endif                          /* INETADDRESSTYPE_ENUMS */



#ifdef __cplusplus
}
#endif
#endif                          /* UDPENDPOINTTABLE_OIDS_H */
