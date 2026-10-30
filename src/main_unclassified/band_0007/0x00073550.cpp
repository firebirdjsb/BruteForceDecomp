/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A6F465F3CD2EA78830312C2B3618F31D8F3EE219CF81BA66ABC9DF55BBFC8A6
 * Entry: 0x00073550, Ghidra index: 1299, label: FUN_00073550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00073110(undefined4 param_1,int param_2,undefined4 param_3);
extern undefined4 FUN_000ff730(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
extern void FUN_000b2a50(void);

void FUN_00073550(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (param_1 != 0) {
    FUN_00073110(in_ECX,param_1,0);
    iVar1 = *(int *)(in_ECX + 0xc);
    iVar2 = FUN_000ff730(in_ECX + 8,iVar1,*(undefined4 *)(iVar1 + 4),&param_1);
    FUN_000b2a50();
    *(int *)(iVar1 + 4) = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
  }
  return;
}
