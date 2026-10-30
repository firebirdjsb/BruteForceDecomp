/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6FB164C0BCB4F280B742CE49F52BC704689B49656D1451390BE886032E6CD78
 * Entry: 0x0008a720, Ghidra index: 1660, label: FUN_0008a720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined1 FUN_0008a560(int *param_1);
extern undefined4 FUN_0005beb0(void);
extern undefined4 FUN_0005be70(void);
extern void FUN_0005be20(void);
extern void FUN_00129450(void);
extern void FUN_00018230(void);
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
extern void FUN_0005bd20(int param_1);
extern void FUN_00129430(void);
extern void FUN_000bd390(int param_1);
extern void FUN_0008b9a0(void);

undefined4 FUN_0008a720(undefined4 *param_1,int *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  if (param_2 != (int *)param_1[4]) {
    iVar3 = param_1[10];
    if (iVar3 == 0) {
      return 0;
    }
    if (param_2 != (int *)0x0) {
      FUN_0008a560(0);
      iVar3 = param_1[10];
      cVar1 = FUN_0005beb0();
      if (cVar1 == '\0') {
        return 0;
      }
      puVar2 = (undefined4 *)FUN_0005be70();
      if ((puVar2 != (undefined4 *)0x0) && (puVar2 != param_1)) {
        return 0;
      }
    }
    if (param_1[4] != 0) {
      if (iVar3 != 0) {
        FUN_0005be20();
      }
      if (param_1[9] != 0) {
        FUN_000120d0();
      }
      FUN_00129450();
    }
    if (((int *)param_1[4] != (int *)0x0) &&
       (iVar3 = (**(code **)(*(int *)param_1[4] + 0xf4))(), iVar3 != 0)) {
      piVar5 = param_2;
      (**(code **)(*(int *)param_1[4] + 0xf4))(param_2);
      FUN_00018230(piVar5);
    }
    if ((param_2 != (int *)0x0) && (iVar3 = (**(code **)(*param_2 + 0xf4))(), iVar3 != 0)) {
      uVar4 = (**(code **)(*param_2 + 0xf4))();
      FUN_00018150(uVar4);
    }
    *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfe;
    if (param_1[0x1a] != 0) {
      FUN_0008f6a0(0);
    }
    if ((int *)param_1[4] != param_2) {
      FUN_0008f6a0(param_2);
    }
    if (param_2 != (int *)0x0) {
      if (param_1[9] != 0) {
        FUN_000120d0();
      }
      if (param_1[10] != 0) {
        FUN_0005be20();
        FUN_0005bd20(param_1[10]);
      }
      FUN_00129430();
      FUN_000bd390(param_1[0xc]);
      FUN_0008b9a0();
      *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfd;
      *param_1 = *(undefined4 *)(param_2[3] + 8);
    }
    (**(code **)(**(int **)(param_1[0xe] + 0xbec) + 0x1c))();
  }
  return 1;
}
