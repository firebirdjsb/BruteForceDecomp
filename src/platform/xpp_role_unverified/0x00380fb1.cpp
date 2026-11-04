/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A5AB4EA9FDF6E3E6BA2E3AC2C5AB7905DE4BB94DD59A6112AF42AB0102A699A6
 * Entry: 0x00380fb1, Ghidra index: 13546, label: FUN_00380fb1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox x86 guest ABI_UNVERIFIED. */
extern undefined4 FUN_00383904(int param_1,int param_2);
void FUN_00380fb1(undefined4 param_1)

{
  int in_ECX;
  
  FUN_00383904(*(int *)(in_ECX + 0xc) + 0x18,param_1);
  return;
}
