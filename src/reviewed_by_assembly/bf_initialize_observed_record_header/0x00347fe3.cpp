/* Brute Force original Xbox, observed ECX-context header writer.
 * Entry: 0x00347fe3
 * Input x86 body SHA-256: EC56BFF4FD6BED844A35C3BB0EB5FB7FD4CF1F5AF59DD305C6244A4E31BC8214
 * x86: ECX context + three stack words, ret 12.
 * Runtime concurrency behavior remains unverified.
 */
#include "bf_xnet_record_x86.h"
#include "bf_recovered_function_names.h"
void BF_X86_CONTEXTCALL bf_initialize_observed_record_header(
 void *incoming_ecx_context, uintptr_t handle,
 uint32_t field_from_first_stack_arg, uint32_t byte_flag)
{
 uint8_t *ctx=(uint8_t *)incoming_ecx_context;
 uint8_t *record=*(uint8_t **)(uintptr_t)handle;
 record[0]=UINT8_C(0x45);
 record[1]=ctx[0x16]; record[2]=0; record[3]=0;
 /* Original XADD [ECX+0x8B0] increments a 32-bit context value.
  * This represents single-threaded effects, not concurrency equivalence. */
 uint32_t old=(uint32_t)ctx[0x8b0]|((uint32_t)ctx[0x8b1]<<8)|
    ((uint32_t)ctx[0x8b2]<<16)|((uint32_t)ctx[0x8b3]<<24);
 uint32_t next=old+UINT32_C(1);
 ctx[0x8b0]=(uint8_t)next;
 ctx[0x8b1]=(uint8_t)(next>>8);
 ctx[0x8b2]=(uint8_t)(next>>16);
 ctx[0x8b3]=(uint8_t)(next>>24);
 record[4]=(uint8_t)(next>>8);record[5]=(uint8_t)next;
 record[6]=0;record[7]=0;
 record[8]=ctx[0x17];record[9]=(uint8_t)byte_flag;
 /* Output +10 and +11 are untouched by this function. */
 record[12]=0;record[13]=0;record[14]=0;record[15]=0;
 record[16]=(uint8_t)field_from_first_stack_arg;
 record[17]=(uint8_t)(field_from_first_stack_arg>>8);
 record[18]=(uint8_t)(field_from_first_stack_arg>>16);
 record[19]=(uint8_t)(field_from_first_stack_arg>>24);
}
