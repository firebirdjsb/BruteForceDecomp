/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 565DFD1A733E096A5A9235B5A1BE70DE5D57DC32BE31E542F6D14CF7AD261100
 * Entry: 0x001a0680, Ghidra index: 5328, label: FUN_001a0680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE: two caller-owned guest DWORDs, ADD ESP,8 after direct CALL;
 * EAX/ECX inputs and linked host ABI remain ABI_UNVERIFIED. */
extern int FUN_0023a790(std::uint32_t guest_stack_word_0,
                        std::uint32_t guest_stack_word_1);
bool FUN_001a0680(void)

{
  int iVar1;
  
  iVar1 = FUN_0023a790(0xeffb000c,1);
  return iVar1 != 0;
}
