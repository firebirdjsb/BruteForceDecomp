/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C8C862E61C9B0C433A014CB6EB260C572C7B26DBC8ECD563F4670C2C5E817AC4
 * Entry: 0x0031c357, Ghidra index: 12330, label: FUN_0031c357
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f784;
extern uint32_t _DAT_fec0017c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0031c357(void)

{
  int *in_ECX;
  
  FUN_003118f0();
  *(undefined1 *)((&DAT_0032f784)[*in_ECX] + -0x13ffef5) = 2;
  do {
  } while ((*(byte *)((&DAT_0032f784)[*in_ECX] + -0x13ffef5) & 2) != 0);
  *(int *)((&DAT_0032f784)[*in_ECX] + -0x13fff00) = in_ECX[7];
  if (*in_ECX == 1) {
    _DAT_fec0017c = in_ECX[10];
  }
  FUN_0031c161(*(undefined1 *)((int)in_ECX + 0x25),(char)in_ECX[9],1,1);
  FUN_00311923();
  return;
}
