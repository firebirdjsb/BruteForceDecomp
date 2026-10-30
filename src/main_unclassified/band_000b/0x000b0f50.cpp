/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE0CA534B48EE991D4CA32A4E1B42D59CFDC4249E27D630C6B3581888D02B97F
 * Entry: 0x000b0f50, Ghidra index: 2103, label: FUN_000b0f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b0f50(undefined4 param_1)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(in_EAX + 8) - iVar1) / 0x2c) <
      (uint)((*(int *)(in_EAX + 0xc) - iVar1) / 0x2c))) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_000b1800(iVar1,1,param_1,param_1);
    *(int *)(in_EAX + 8) = iVar1 + 0x2c;
    return;
  }
  FUN_000b10e0(&param_1,*(undefined4 *)(in_EAX + 8),param_1);
  return;
}
