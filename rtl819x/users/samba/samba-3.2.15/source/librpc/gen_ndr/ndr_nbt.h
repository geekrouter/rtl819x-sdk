/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "librpc/gen_ndr/nbt.h"

#ifndef _HEADER_NDR_nbt
#define _HEADER_NDR_nbt

#include "libcli/nbt/libnbt.h"
#define NDR_NBT_CALL_COUNT (0)
void ndr_print_nbt_operation(struct ndr_print *ndr, const char *name, uint16_t r);
void ndr_print_nbt_name_type(struct ndr_print *ndr, const char *name, enum nbt_name_type r);
enum ndr_err_code ndr_push_nbt_name(struct ndr_push *ndr, int ndr_flags, const struct nbt_name *r);
enum ndr_err_code ndr_pull_nbt_name(struct ndr_pull *ndr, int ndr_flags, struct nbt_name *r);
void ndr_print_nbt_name(struct ndr_print *ndr, const char *name, const struct nbt_name *r);
void ndr_print_nbt_qclass(struct ndr_print *ndr, const char *name, enum nbt_qclass r);
void ndr_print_nbt_qtype(struct ndr_print *ndr, const char *name, enum nbt_qtype r);
void ndr_print_nbt_name_question(struct ndr_print *ndr, const char *name, const struct nbt_name_question *r);
void ndr_print_nb_flags(struct ndr_print *ndr, const char *name, uint16_t r);
void ndr_print_nbt_rdata_address(struct ndr_print *ndr, const char *name, const struct nbt_rdata_address *r);
void ndr_print_nbt_rdata_netbios(struct ndr_print *ndr, const char *name, const struct nbt_rdata_netbios *r);
void ndr_print_nbt_statistics(struct ndr_print *ndr, const char *name, const struct nbt_statistics *r);
void ndr_print_nbt_status_name(struct ndr_print *ndr, const char *name, const struct nbt_status_name *r);
void ndr_print_nbt_rdata_status(struct ndr_print *ndr, const char *name, const struct nbt_rdata_status *r);
void ndr_print_nbt_rdata_data(struct ndr_print *ndr, const char *name, const struct nbt_rdata_data *r);
void ndr_print_nbt_rdata(struct ndr_print *ndr, const char *name, const union nbt_rdata *r);
void ndr_print_nbt_res_rec(struct ndr_print *ndr, const char *name, const struct nbt_res_rec *r);
enum ndr_err_code ndr_push_nbt_name_packet(struct ndr_push *ndr, int ndr_flags, const struct nbt_name_packet *r);
enum ndr_err_code ndr_pull_nbt_name_packet(struct ndr_pull *ndr, int ndr_flags, struct nbt_name_packet *r);
void ndr_print_nbt_name_packet(struct ndr_print *ndr, const char *name, const struct nbt_name_packet *r);
void ndr_print_dgram_msg_type(struct ndr_print *ndr, const char *name, enum dgram_msg_type r);
void ndr_print_dgram_flags(struct ndr_print *ndr, const char *name, uint8_t r);
void ndr_print_smb_command(struct ndr_print *ndr, const char *name, enum smb_command r);
void ndr_print_smb_trans_body(struct ndr_print *ndr, const char *name, const struct smb_trans_body *r);
void ndr_print_smb_body(struct ndr_print *ndr, const char *name, const union smb_body *r);
enum ndr_err_code ndr_push_dgram_smb_packet(struct ndr_push *ndr, int ndr_flags, const struct dgram_smb_packet *r);
enum ndr_err_code ndr_pull_dgram_smb_packet(struct ndr_pull *ndr, int ndr_flags, struct dgram_smb_packet *r);
void ndr_print_dgram_smb_packet(struct ndr_print *ndr, const char *name, const struct dgram_smb_packet *r);
void ndr_print_dgram_message_body(struct ndr_print *ndr, const char *name, const union dgram_message_body *r);
void ndr_print_dgram_message(struct ndr_print *ndr, const char *name, const struct dgram_message *r);
void ndr_print_dgram_err_code(struct ndr_print *ndr, const char *name, enum dgram_err_code r);
void ndr_print_dgram_data(struct ndr_print *ndr, const char *name, const union dgram_data *r);
enum ndr_err_code ndr_push_nbt_dgram_packet(struct ndr_push *ndr, int ndr_flags, const struct nbt_dgram_packet *r);
enum ndr_err_code ndr_pull_nbt_dgram_packet(struct ndr_pull *ndr, int ndr_flags, struct nbt_dgram_packet *r);
void ndr_print_nbt_dgram_packet(struct ndr_print *ndr, const char *name, const struct nbt_dgram_packet *r);
void ndr_print_nbt_netlogon_command(struct ndr_print *ndr, const char *name, enum nbt_netlogon_command r);
void ndr_print_nbt_netlogon_version(struct ndr_print *ndr, const char *name, uint32_t r);
void ndr_print_nbt_netlogon_query_for_pdc(struct ndr_print *ndr, const char *name, const struct nbt_netlogon_query_for_pdc *r);
void ndr_print_nbt_netlogon_query_for_pdc2(struct ndr_print *ndr, const char *name, const struct nbt_netlogon_query_for_pdc2 *r);
void ndr_print_nbt_netlogon_response_from_pdc(struct ndr_print *ndr, const char *name, const struct nbt_netlogon_response_from_pdc *r);
void ndr_print_nbt_server_type(struct ndr_print *ndr, const char *name, uint32_t r);
void ndr_print_nbt_dc_sock_addr(struct ndr_print *ndr, const char *name, const struct nbt_dc_sock_addr *r);
void ndr_print_nbt_netlogon_response_from_pdc2(struct ndr_print *ndr, const char *name, const struct nbt_netlogon_response_from_pdc2 *r);
void ndr_print_nbt_db_change(struct ndr_print *ndr, const char *name, const struct nbt_db_change *r);
void ndr_print_nbt_netlogon_announce_uas(struct ndr_print *ndr, const char *name, const struct nbt_netlogon_announce_uas *r);
void ndr_print_nbt_netlogon_request(struct ndr_print *ndr, const char *name, const union nbt_netlogon_request *r);
enum ndr_err_code ndr_push_nbt_netlogon_packet(struct ndr_push *ndr, int ndr_flags, const struct nbt_netlogon_packet *r);
enum ndr_err_code ndr_pull_nbt_netlogon_packet(struct ndr_pull *ndr, int ndr_flags, struct nbt_netlogon_packet *r);
void ndr_print_nbt_netlogon_packet(struct ndr_print *ndr, const char *name, const struct nbt_netlogon_packet *r);
void ndr_print_nbt_cldap_netlogon_1(struct ndr_print *ndr, const char *name, const struct nbt_cldap_netlogon_1 *r);
void ndr_print_nbt_cldap_netlogon_3(struct ndr_print *ndr, const char *name, const struct nbt_cldap_netlogon_3 *r);
enum ndr_err_code ndr_push_nbt_cldap_netlogon_5(struct ndr_push *ndr, int ndr_flags, const struct nbt_cldap_netlogon_5 *r);
enum ndr_err_code ndr_pull_nbt_cldap_netlogon_5(struct ndr_pull *ndr, int ndr_flags, struct nbt_cldap_netlogon_5 *r);
void ndr_print_nbt_cldap_netlogon_5(struct ndr_print *ndr, const char *name, const struct nbt_cldap_netlogon_5 *r);
void ndr_print_nbt_cldap_netlogon_13(struct ndr_print *ndr, const char *name, const struct nbt_cldap_netlogon_13 *r);
enum ndr_err_code ndr_push_nbt_cldap_netlogon_15(struct ndr_push *ndr, int ndr_flags, const struct nbt_cldap_netlogon_15 *r);
enum ndr_err_code ndr_pull_nbt_cldap_netlogon_15(struct ndr_pull *ndr, int ndr_flags, struct nbt_cldap_netlogon_15 *r);
void ndr_print_nbt_cldap_netlogon_15(struct ndr_print *ndr, const char *name, const struct nbt_cldap_netlogon_15 *r);
enum ndr_err_code ndr_push_nbt_cldap_netlogon_29(struct ndr_push *ndr, int ndr_flags, const struct nbt_cldap_netlogon_29 *r);
enum ndr_err_code ndr_pull_nbt_cldap_netlogon_29(struct ndr_pull *ndr, int ndr_flags, struct nbt_cldap_netlogon_29 *r);
void ndr_print_nbt_cldap_netlogon_29(struct ndr_print *ndr, const char *name, const struct nbt_cldap_netlogon_29 *r);
enum ndr_err_code ndr_push_nbt_cldap_netlogon(struct ndr_push *ndr, int ndr_flags, const union nbt_cldap_netlogon *r);
enum ndr_err_code ndr_pull_nbt_cldap_netlogon(struct ndr_pull *ndr, int ndr_flags, union nbt_cldap_netlogon *r);
void ndr_print_nbt_cldap_netlogon(struct ndr_print *ndr, const char *name, const union nbt_cldap_netlogon *r);
void ndr_print_nbt_ntlogon_command(struct ndr_print *ndr, const char *name, enum nbt_ntlogon_command r);
void ndr_print_nbt_ntlogon_sam_logon(struct ndr_print *ndr, const char *name, const struct nbt_ntlogon_sam_logon *r);
void ndr_print_nbt_ntlogon_sam_logon_reply(struct ndr_print *ndr, const char *name, const struct nbt_ntlogon_sam_logon_reply *r);
void ndr_print_nbt_ntlogon_request(struct ndr_print *ndr, const char *name, const union nbt_ntlogon_request *r);
enum ndr_err_code ndr_push_nbt_ntlogon_packet(struct ndr_push *ndr, int ndr_flags, const struct nbt_ntlogon_packet *r);
enum ndr_err_code ndr_pull_nbt_ntlogon_packet(struct ndr_pull *ndr, int ndr_flags, struct nbt_ntlogon_packet *r);
void ndr_print_nbt_ntlogon_packet(struct ndr_print *ndr, const char *name, const struct nbt_ntlogon_packet *r);
void ndr_print_nbt_browse_opcode(struct ndr_print *ndr, const char *name, enum nbt_browse_opcode r);
void ndr_print_nbt_browse_host_announcement(struct ndr_print *ndr, const char *name, const struct nbt_browse_host_announcement *r);
void ndr_print_nbt_browse_announcement_request(struct ndr_print *ndr, const char *name, const struct nbt_browse_announcement_request *r);
void ndr_print_nbt_browse_election_request(struct ndr_print *ndr, const char *name, const struct nbt_browse_election_request *r);
void ndr_print_nbt_browse_backup_list_request(struct ndr_print *ndr, const char *name, const struct nbt_browse_backup_list_request *r);
void ndr_print_nbt_browse_backup_list_response(struct ndr_print *ndr, const char *name, const struct nbt_browse_backup_list_response *r);
void ndr_print_nbt_browse_become_backup(struct ndr_print *ndr, const char *name, const struct nbt_browse_become_backup *r);
void ndr_print_nbt_browse_domain_announcement(struct ndr_print *ndr, const char *name, const struct nbt_browse_domain_announcement *r);
void ndr_print_nbt_browse_master_announcement(struct ndr_print *ndr, const char *name, const struct nbt_browse_master_announcement *r);
void ndr_print_nbt_browse_reset_state(struct ndr_print *ndr, const char *name, const struct nbt_browse_reset_state *r);
void ndr_print_nbt_browse_local_master_announcement(struct ndr_print *ndr, const char *name, const struct nbt_browse_local_master_announcement *r);
void ndr_print_nbt_browse_payload(struct ndr_print *ndr, const char *name, const union nbt_browse_payload *r);
enum ndr_err_code ndr_push_nbt_browse_packet(struct ndr_push *ndr, int ndr_flags, const struct nbt_browse_packet *r);
enum ndr_err_code ndr_pull_nbt_browse_packet(struct ndr_pull *ndr, int ndr_flags, struct nbt_browse_packet *r);
void ndr_print_nbt_browse_packet(struct ndr_print *ndr, const char *name, const struct nbt_browse_packet *r);
#endif /* _HEADER_NDR_nbt */
