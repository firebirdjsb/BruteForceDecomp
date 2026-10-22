/* Brute Force original Xbox x86: tag and forward a four-byte word.
 * Entry: 0x00349413
 * Input x86 body SHA-256: 3D6DE52EAEE73DCA453002F1885A0825D19DE948071E4DC585A321C52F8B7309
 * Incoming ECX context, two stack args, ret 8; x86 thiscall model.
 */
#include "bf_xnet_record_x86.h"
#include "bf_recovered_function_names.h"
void BF_X86_CONTEXTCALL bf_forward_tagged_four_byte_word(
    void *incoming_ecx_context,const void *first_stack_arg,
    uint32_t four_byte_payload_word)
{
    FUN_00349366(incoming_ecx_context,first_stack_arg,
                 UINT16_C(0x5300),&four_byte_payload_word,
                 UINT32_C(4),NULL,UINT32_C(0));
}
