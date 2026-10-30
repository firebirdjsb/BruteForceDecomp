/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E5A83C8AC1880F8B319D3A47A8315BF99AE01E016FD9DF0F016FD5E0BDE42F3A
 * Entry: 0x000dfd20, Ghidra index: 2735, label: FUN_000dfd20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint FUN_0005e020(uint param_1);
extern void FUN_0010af20(void);

undefined4 FUN_000dfd20(undefined4 param_1,uint param_2)

{
  char cVar1;
  
  if (((param_2 & -(uint)((*(byte *)(param_2 + 0x26) & 0x40) != 0)) != 0) &&
     ((*(uint *)(*(int *)(param_2 + 0xc) + 0xa8) >> 8 & 1) == 0)) {
    cVar1 = FUN_0005e020(param_2);
    if (cVar1 != '\0') {
      FUN_0010af20();
      return 1;
    }
  }
  return 0;
}
