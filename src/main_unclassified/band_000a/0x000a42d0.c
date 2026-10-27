/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 49C324674E97B193CF2B87DEFAB44DA0E520AABD71B91824735AEB2A120F2C42
 * Entry: 0x000a42d0, Ghidra index: 1955, label: FUN_000a42d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443308;
/* XBE 0x000A4301/0x000A4336, repeated at 0x000A4362/0x000A4397,
 * 0x000A43C3/0x000A43F8 and 0x000A4424/0x000A4459:
 * MOV EAX,[0x00443308]; MOV EDX,[EAX]; CALL [EDX+0x28]
 * or CALL [ECX+0x24]. Those are BYTE offsets in the original
 * 32-bit guest virtual table. The original Ghidra expression
 * (*DAT_00443308)[10/9] incorrectly indexed a scalar UINT32.
 * Guest address relocation and host vtable ABI remain unverified. */
void FUN_000a42d0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int unaff_ESI;
  undefined4 **ppuStack_38;
  undefined4 **ppuStack_34;
  int *piStack_30;
  undefined4 **ppuStack_2c;
  undefined1 *puStack_28;
  int *piStack_24;
  undefined4 **ppuStack_20;
  undefined4 *puStack_1c;
  int *piStack_18;
  undefined4 local_8 [2];
  
  piStack_18 = *(int **)(unaff_ESI + 8);
  piVar4 = (int *)(unaff_ESI + 8);
  if (piStack_18 != (int *)0x0) {
    puStack_1c = (undefined4 *)0xa42e8;
    (**(code **)(*piStack_18 + 8))();
    *piVar4 = 0;
  }
  puStack_1c = local_8;
  local_8[0] = 0x40eade8;
  ppuStack_20 = DAT_00443308;
  piStack_24 = (int *)0xa4304;
  piStack_18 = piVar4;
  iVar3 = (**(code **)(*DAT_00443308 + 0x28))();
  if (iVar3 < 0) {
    piStack_24 = (int *)*piVar4;
    if (piStack_24 != (int *)0x0) {
      puStack_28 = (undefined1 *)0xa4314;
      (**(code **)(*piStack_24 + 8))();
      *piVar4 = 0;
    }
    puStack_28 = (undefined1 *)0x0;
    ppuStack_2c = (undefined4 **)&stack0xffffffec;
    piStack_30 = (int *)&stack0xfffffff0;
    ppuStack_34 = DAT_00443308;
    ppuStack_38 = (undefined4 **)0xa4339;
    piStack_24 = piVar4;
    (**(code **)(*DAT_00443308 + 0x24))();
  }
  piStack_24 = *(int **)(unaff_ESI + 0xc);
  piVar4 = (int *)(unaff_ESI + 0xc);
  if (piStack_24 != (int *)0x0) {
    puStack_28 = (undefined1 *)0xa4349;
    (**(code **)(*piStack_24 + 8))();
    *piVar4 = 0;
  }
  puStack_28 = &stack0xfffffff0;
  ppuStack_2c = DAT_00443308;
  piStack_30 = (int *)0xa4365;
  piStack_24 = piVar4;
  iVar3 = (*(code *)(*DAT_00443308)[10])();
  if (iVar3 < 0) {
    piStack_30 = (int *)*piVar4;
    if (piStack_30 != (int *)0x0) {
      ppuStack_34 = (undefined4 **)0xa4375;
      (**(code **)(*piStack_30 + 8))();
      *piVar4 = 0;
    }
    ppuStack_34 = (undefined4 **)0x0;
    ppuStack_38 = &puStack_1c;
    puStack_1c = (undefined4 *)0x1ef1e920;
    ppuStack_20 = (undefined4 **)0xe4b5147f;
    piStack_30 = piVar4;
    (*(code *)(*DAT_00443308)[9])(DAT_00443308,&ppuStack_20);
  }
  piStack_30 = *(int **)(unaff_ESI + 0x10);
  piVar4 = (int *)(unaff_ESI + 0x10);
  if (piStack_30 != (int *)0x0) {
    ppuStack_34 = (undefined4 **)0xa43aa;
    (**(code **)(*piStack_30 + 8))();
    *piVar4 = 0;
  }
  ppuStack_34 = &puStack_1c;
  puStack_1c = (undefined4 *)0xeb7a6be1;
  ppuStack_38 = DAT_00443308;
  piStack_30 = piVar4;
  iVar3 = (*(code *)(*DAT_00443308)[10])();
  if (iVar3 < 0) {
    piVar2 = (int *)*piVar4;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *piVar4 = 0;
    }
    puStack_28 = (undefined1 *)0xe2c39ac2;
    ppuStack_2c = (undefined4 **)0xeb7a6be1;
    (*(code *)(*DAT_00443308)[9])(DAT_00443308,&ppuStack_2c,&puStack_28,0,piVar4);
  }
  piVar2 = *(int **)(unaff_ESI + 0x14);
  piVar4 = (int *)(unaff_ESI + 0x14);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *piVar4 = 0;
  }
  puStack_28 = (undefined1 *)0x1116be9c;
  iVar3 = (*(code *)(*DAT_00443308)[10])(DAT_00443308,&puStack_28,piVar4);
  if (iVar3 < 0) {
    piVar2 = (int *)*piVar4;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *piVar4 = 0;
    }
    ppuStack_34 = (undefined4 **)0x1bedf9a9;
    ppuStack_38 = (undefined4 **)0x1116be9c;
    (*(code *)(*DAT_00443308)[9])(DAT_00443308,&ppuStack_38,&ppuStack_34,0,piVar4);
  }
  ppuStack_34 = (undefined4 **)0x796c3b0;
  piVar4 = (int *)FUN_000a7770(&ppuStack_34);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(piVar4);
    piVar2 = *(int **)(unaff_ESI + 0x44);
    puVar1 = (undefined4 *)(unaff_ESI + 0x44);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *puVar1 = 0;
    }
    (**(code **)(*piVar4 + 0x30))(piVar4,0,puVar1);
    uVar5 = (**(code **)(*(int *)*puVar1 + 0x28))((int *)*puVar1);
    *(undefined4 *)(unaff_ESI + 0x40) = uVar5;
    uVar5 = (**(code **)(*(int *)*puVar1 + 0x14))((int *)*puVar1);
    *(undefined4 *)(unaff_ESI + 0x1c) = uVar5;
    *(undefined4 *)(unaff_ESI + 0x24) = uVar5;
    uVar5 = (**(code **)(*(int *)*puVar1 + 0x18))((int *)*puVar1);
    *(undefined4 *)(unaff_ESI + 0x20) = uVar5;
    *(undefined4 *)(unaff_ESI + 0x28) = uVar5;
    iVar3 = FUN_002ebf10();
    uVar6 = iVar3 << 0x18 | 0xffffff;
    *(uint *)(unaff_ESI + 0x54) = uVar6;
    *(uint *)(unaff_ESI + 0x6c) = uVar6;
    *(uint *)(unaff_ESI + 0x84) = uVar6;
    *(uint *)(unaff_ESI + 0x9c) = uVar6;
    *(undefined4 *)(unaff_ESI + 0x48) = 0xbf800000;
    *(undefined4 *)(unaff_ESI + 0x4c) = 0xbf800000;
    *(undefined4 *)(unaff_ESI + 0x50) = 0;
    *(undefined4 *)(unaff_ESI + 0x58) = 0;
    *(undefined4 *)(unaff_ESI + 0x5c) = 0x3f800000;
    *(undefined4 *)(unaff_ESI + 0x60) = 0xbf800000;
    *(undefined4 *)(unaff_ESI + 100) = 0x3f800000;
    *(undefined4 *)(unaff_ESI + 0x68) = 0;
    *(undefined4 *)(unaff_ESI + 0x70) = 0;
    *(undefined4 *)(unaff_ESI + 0x74) = 0;
    *(undefined4 *)(unaff_ESI + 0x78) = 0x3f800000;
    *(undefined4 *)(unaff_ESI + 0x7c) = 0x3f800000;
    *(undefined4 *)(unaff_ESI + 0x80) = 0;
    *(undefined4 *)(unaff_ESI + 0x88) = 0x3f800000;
    *(undefined4 *)(unaff_ESI + 0x8c) = 0;
    *(undefined4 *)(unaff_ESI + 0x90) = 0x3f800000;
    *(undefined4 *)(unaff_ESI + 0x94) = 0xbf800000;
    *(undefined4 *)(unaff_ESI + 0x98) = 0;
    *(undefined4 *)(unaff_ESI + 0xa0) = 0x3f800000;
    *(undefined4 *)(unaff_ESI + 0xa4) = 0x3f800000;
    *(undefined2 *)(unaff_ESI + 0xa8) = 0;
    *(undefined2 *)(unaff_ESI + 0xaa) = 1;
    *(undefined2 *)(unaff_ESI + 0xac) = 2;
    *(undefined2 *)(unaff_ESI + 0xae) = 2;
    *(undefined2 *)(unaff_ESI + 0xb0) = 3;
    *(undefined2 *)(unaff_ESI + 0xb2) = 0;
    (**(code **)(*piVar4 + 8))(piVar4);
    return;
  }
  *(undefined4 *)(unaff_ESI + 0x40) = 0;
  return;
}
