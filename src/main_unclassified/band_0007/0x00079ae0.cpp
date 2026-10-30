/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F769BF69D589C40D1E509F89AF2D4E53D1BD7F82563FF75D50A2BF9506005687
 * Entry: 0x00079ae0, Ghidra index: 1450, label: FUN_00079ae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00079510(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4);
extern undefined1 FUN_002e5880(void);
extern undefined4 FUN_002e5bf0(int param_1);
extern void FUN_00084f50(char param_1);

extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b58;
void FUN_00079ae0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  
  FUN_00079510(in_ECX,param_1,param_2,param_3);
  piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  cVar1 = (**(code **)(*piVar2 + 0x50))(param_1,param_2,param_3);
  if (cVar1 != '\0') {
    return;
  }
  if (*param_1 != 0x1a4e01d4) {
    return;
  }
  if (*(int *)(DAT_0046995c + 0x1c) != 0) {
    cVar1 = FUN_002e5880();
    if (cVar1 != '\0') {
      return;
    }
    iVar3 = FUN_002e5bf0(0);
    if (*(int *)(iVar3 + 0x2c) == 0) {
      return;
    }
  }
  (**(code **)(*in_ECX + 0x18))(1);
  FUN_00084f50();
  return;
}
