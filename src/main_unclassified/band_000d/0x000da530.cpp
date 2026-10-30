/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4323A405040547C6EB3AD95DDE1D27ECCD6C9C7E50458A2B02598FABE0F6C308
 * Entry: 0x000da530, Ghidra index: 2687, label: FUN_000da530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_000da400(int param_1,int param_2);
extern undefined4 FUN_0006a610(int *param_1);
extern undefined4 FUN_000a4a60(int param_1);
extern undefined4 FUN_000a4d00(void);
extern void FUN_000e24d0(undefined4 param_1,char param_2);
extern void FUN_00238630(void);

void FUN_000da530(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 in_EAX;
  int in_ECX;
  
  iVar2 = param_1;
  cVar3 = FUN_000da400(param_1,in_EAX);
  if (cVar3 != '\0') {
    piVar1 = *(int **)(in_ECX + 0xc48);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x38))(piVar1,0);
      param_1 = 4;
      FUN_0006a610(&param_1);
    }
    param_1 = 3;
    FUN_0006a610(&param_1);
    param_1 = 3;
    FUN_0006a610(&param_1);
    param_1 = 0;
    FUN_0006a610(&param_1);
    param_1 = 1;
    FUN_0006a610(&param_1);
    param_1 = 1;
    FUN_0006a610(&param_1);
    param_1 = 0;
    FUN_0006a610(&param_1);
    FUN_000a4a60(9);
    FUN_000a4d00();
    FUN_000e24d0(*(undefined4 *)(iVar2 + 0x8c),1);
    FUN_00238630();
  }
  return;
}
