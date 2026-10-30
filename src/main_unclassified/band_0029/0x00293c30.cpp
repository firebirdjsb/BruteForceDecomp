/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A7A5F6FF15555228BD0B769489C5415344D5127BB191C9786F8BFC038397F5A5
 * Entry: 0x00293c30, Ghidra index: 9268, label: FUN_00293c30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_unexpected_type_to_index_table_00404894[];
int FUN_00293c30(void)

{
  undefined4 *in_EAX;
  int iVar1;
  
  switch(*in_EAX) {
  case 0xfffffff9:
  case 0xfffffffb:
  case 0xfffffffc:
  case 0xfffffffd:
  case 0xfffffffe:
  case 0:
    iVar1 = in_EAX[2];
    break;
  default:
    FUN_0028ab50(s_unexpected_type_to_index_table_00404894);
    return 0;
  case 0xffffffff:
    iVar1 = FUN_002ebf10();
  }
  if (iVar1 < 0) {
    iVar1 = -1 - iVar1;
  }
  return iVar1;
}
