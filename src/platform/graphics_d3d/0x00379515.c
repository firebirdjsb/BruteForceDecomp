/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 76FAD3455FA32F4BB4EDF03EB026D2C71816FED7EFCCCE65307D4B5087E1F1D5
 * Entry: 0x00379515, Ghidra index: 13483, label: FUN_00379515
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400144;
extern uint32_t DAT_00400784;
extern uint32_t DAT_00400788;
void FUN_00379515(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  if (param_1 != 2) {
    *(uint *)(&DAT_00400784 + iVar1) = in_ECX[param_1 + 0x4e] & 0xffff;
    *(undefined4 *)(&DAT_00400788 + iVar1) = 2;
    FUN_003793b5();
    *(undefined4 *)(&DAT_00400144 + iVar1) = 0x10000000;
  }
  return;
}
