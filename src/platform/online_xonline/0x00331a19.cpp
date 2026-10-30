/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 29FAF332EDDAF2C7C57B78018BD4F3C8E75720D6098352F6FA8BFB00BB4C649E
 * Entry: 0x00331a19, Ghidra index: 12398, label: FUN_00331a19
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* These addresses have matching definitions in current recovered C drafts.
 * Indirect-call ABI and 32-bit pointer storage remain ABI_UNVERIFIED. */
extern void FUN_00331694(int param_1);
extern void FUN_00331991(int param_1);
int FUN_00331a19(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 *param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  
  puVar2 = (undefined4 *)FUN_0033ea0c(0x670,0x2015);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00330c2d(puVar2);
    puVar2[3] = 0;
    puVar2[0xe] = param_3;
    *puVar2 = FUN_00331694;
    puVar2[1] = FUN_00331991;
    puVar2[2] = param_4;
    puVar2[0xd] = param_1;
    puVar3 = (undefined4 *)FUN_0033ea0c(0x568,0x2014);
    puVar2[0x19b] = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *(undefined4 *)(in_ECX + 0x18);
      puVar3[1] = *(undefined4 *)(in_ECX + 0x1c);
      *(undefined4 *)(puVar2[0x19b] + 0xa8) = param_2;
      iVar4 = FUN_00331457(1,param_4,puVar2 + 0xf);
      *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) =
           *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) & 0xfff7ffff | 0x40000;
      puVar2[4] = 6;
      FUN_00331694(puVar2);
      *param_5 = puVar2;
      if (-1 < iVar4) {
        return iVar4;
      }
      goto LAB_00331ae7;
    }
  }
  puVar1 = (uint *)(*(int *)(in_ECX + 0xb8) + 0x30);
  *puVar1 = *puVar1 | 8;
  iVar4 = -0x7feafff8;
LAB_00331ae7:
  *param_5 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    if (puVar2[0x13] != 0) {
      FUN_00330c53(puVar2 + 0xf);
    }
    FUN_0033ea20(puVar2);
  }
  return iVar4;
}
