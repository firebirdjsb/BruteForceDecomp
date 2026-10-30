/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0DC024B975C4A3113FEE9365339D11BA7E1D656D10B13280F45A2CFB5E21E6A6
 * Entry: 0x00022420, Ghidra index: 196, label: FUN_00022420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_0011dfa0(void);
extern undefined4 FUN_00020a80(void);

undefined4 FUN_00022420(int param_1,undefined4 param_2,float param_3)

{
  uint *puVar1;
  char cVar2;
  undefined1 *in_EAX;
  int iVar3;
  
  FUN_000120f0();
  *(undefined4 *)(param_1 + 0x490) = 0;
  *(undefined4 *)(param_1 + 0x48c) = 0;
  *(undefined4 *)(param_1 + 0x488) = 0;
  if (*(int *)(param_1 + 0x6f4) != 0) {
    *(undefined4 *)(param_1 + 0x6ac) = 7;
    if (*(int *)(param_1 + 0x6c0) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0x6c0) + 0x28);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    *(undefined4 *)(param_1 + 0x6c0) = 0;
    *in_EAX = 1;
    return 1;
  }
  if (in_EAX[3] == '\0') {
    iVar3 = FUN_0011dfa0();
    iVar3 = (**(code **)(**(int **)(iVar3 + 0xc) + 0x3c))();
    if (iVar3 == 10) {
      param_3 = param_3 * 1.5;
    }
    if (param_3 < *(float *)(in_EAX + 4)) {
      cVar2 = FUN_00020a80();
      if (cVar2 == '\0') {
        *(undefined4 *)(param_1 + 0x6ac) = 0;
        if (*(int *)(param_1 + 0x6c0) != 0) {
          puVar1 = (uint *)(*(int *)(param_1 + 0x6c0) + 0x28);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        *(undefined4 *)(param_1 + 0x6c0) = 0;
        (**(code **)(*(int *)(param_1 + 0x40) + 0x1c))();
        return 1;
      }
    }
  }
  (**(code **)(*(int *)(param_1 + 0x40) + 0x20))(param_2);
  return 1;
}
