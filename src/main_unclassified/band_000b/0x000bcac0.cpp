/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 24DBAA16627A17D65CE80A2117B9B1A306DA0F8512A5287631999E2CAA62266A
 * Entry: 0x000bcac0, Ghidra index: 2297, label: FUN_000bcac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000b21f0(undefined4 param_1);

void FUN_000bcac0(undefined4 param_1)

{
  ushort uVar1;
  int *piVar2;
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 0x22) = 0;
  *(undefined2 *)(in_ECX + 0x20) = 0;
  if (*(int *)(in_ECX + 0x10) != 0) {
    piVar2 = (int *)(**(code **)(*(int *)(*(int *)(in_ECX + 0x10) + 0x48) + 0x18))();
    if (piVar2 != (int *)0x0) {
      uVar1 = (ushort)(piVar2[2] - *piVar2 >> 0x1f);
      *(ushort *)(in_ECX + 0x20) = ((ushort)(piVar2[2] - *piVar2) ^ uVar1) - uVar1;
      uVar1 = (ushort)(piVar2[3] - piVar2[1] >> 0x1f);
      *(ushort *)(in_ECX + 0x22) = ((ushort)(piVar2[3] - piVar2[1]) ^ uVar1) - uVar1;
    }
  }
  FUN_000b21f0(param_1);
  return;
}
