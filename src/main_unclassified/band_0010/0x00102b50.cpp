/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 34B8D4D6E76E83F1D6D49AB01AFD03E673502930B333DAE99F0B6728494D23C6
 * Entry: 0x00102b50, Ghidra index: 3278, label: FUN_00102b50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing 0x002EA01D direct/indirect guest32 allocator boundary:
 * one source size DWORD and 32-bit EAX result. Guest-memory ABI unverified. */
#include "bf_002ea01d_allocator_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
int * FUN_00102b50(int *param_1,int *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int *piVar4;
  
  iVar3 = FUN_002ea01d(0x130);
  if (iVar3 == 0) {
    return (int *)0x0;
  }
  piVar4 = (int *)FUN_00109820();
  if (piVar4 != (int *)0x0) {
    if (*(int *)(in_EAX + 0x88) == DAT_0046d064) {
      FUN_001098a0();
      iVar3 = FUN_001098f0();
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0x88) = 2;
        *(undefined4 *)(iVar3 + 0x8c) = 2;
        FUN_0010ab60();
      }
      *(byte *)(piVar4 + 10) =
           *(byte *)(piVar4 + 10) ^ (*(byte *)(in_EAX + 0x28) ^ *(byte *)(piVar4 + 10)) & 0x10;
      iVar3 = FUN_001098f0();
      if (iVar3 != 0) {
        FUN_00102a30(piVar4);
        FUN_000ef1e0();
        *(undefined4 *)((int)piVar4 + 0x2d) = *(undefined4 *)(in_EAX + 0x2d);
        (**(code **)(*piVar4 + 0x34))();
        *(undefined4 *)((int)piVar4 + 0x31) = *(undefined4 *)(in_EAX + 0x31);
        (**(code **)(*piVar4 + 0x34))();
        *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(in_EAX + 0xb4);
        *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 8;
      }
    }
    else {
      iVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x7c))(in_EAX + 0x88);
      if (iVar3 != 0) {
        cVar2 = FUN_000fd9a0(piVar4 + 0x1e,iVar3 + 0x20);
        if (cVar2 != '\0') {
          uVar1 = *(undefined4 *)(iVar3 + 0x10);
          *(undefined4 *)(in_EAX + 0xac) = *(undefined4 *)(iVar3 + 0xc);
          *(undefined4 *)(in_EAX + 0xb0) = uVar1;
        }
      }
    }
    piVar4[5] = *(int *)(in_EAX + 0xac);
    (**(code **)(*piVar4 + 0x1c))();
    piVar4[6] = *(int *)(in_EAX + 0xb0);
    (**(code **)(*piVar4 + 0x1c))();
    piVar4[2] = in_EAX;
    (**(code **)(*piVar4 + 0x30))();
    piVar4[9] = *param_1;
    (**(code **)(*piVar4 + 0x2c))();
    FUN_001611d0();
    if (*(int *)(in_EAX + 0x7c) == 0) {
      *param_2 = -1;
      return piVar4;
    }
    *param_2 = (*(int *)(in_EAX + 0x80) - *(int *)(in_EAX + 0x7c) >> 2) + -1;
    return piVar4;
  }
  return (int *)0x0;
}
