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
  /* Entry ESP S: SUB ESP,8 and three saved registers leave ESP=S-20.
   * Provided each indirect call restores that steady ESP, the two guest
   * DWORDs are S-8 and S-4 (0x000A42F0/0x000A4351). This is the caller
   * stack-balance inference; indirect callee cleanup remains unverified.
   * Reuse the two words across all observed request calls.
   * The +0x28 method receives (self,word-address,output-address); +0x24
   * receives (self,word-address,word-address,zero,output-address).
   * Original PUSH/LEA sequences 0x000A42EF-0x000A4459 establish these
   * argument words, not the old synthetic stack0x aliases. This repairs
   * their storage/argument linkage only: incoming ESI, the vtable guest
   * mapping, indirect callee cleanup and host execution remain ABI_UNVERIFIED.
   */
  uint32_t guest_request_words[2];

  piVar4 = (int *)(unaff_ESI + 0x8);
  piVar2 = *(int **)(unaff_ESI + 0x8);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *piVar4 = 0;
  }
  guest_request_words[0] = UINT32_C(0x040eade8);
  iVar3 = (**(code **)(*DAT_00443308 + 0x28))
              (DAT_00443308,&guest_request_words[0],piVar4);
  if (iVar3 < 0) {
    piVar2 = (int *)*piVar4;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *piVar4 = 0;
    }
    guest_request_words[0] = UINT32_C(0xf8a2bd56);
    guest_request_words[1] = UINT32_C(0x040eade8);
    (**(code **)(*DAT_00443308 + 0x24))
              (DAT_00443308,&guest_request_words[1],&guest_request_words[0],0,piVar4);
  }
  piVar4 = (int *)(unaff_ESI + 0xc);
  piVar2 = *(int **)(unaff_ESI + 0xc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *piVar4 = 0;
  }
  guest_request_words[1] = UINT32_C(0xe4b5147f);
  iVar3 = (**(code **)(*DAT_00443308 + 0x28))
              (DAT_00443308,&guest_request_words[1],piVar4);
  if (iVar3 < 0) {
    piVar2 = (int *)*piVar4;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *piVar4 = 0;
    }
    guest_request_words[1] = UINT32_C(0x1ef1e920);
    guest_request_words[0] = UINT32_C(0xe4b5147f);
    (**(code **)(*DAT_00443308 + 0x24))
              (DAT_00443308,&guest_request_words[0],&guest_request_words[1],0,piVar4);
  }
  piVar4 = (int *)(unaff_ESI + 0x10);
  piVar2 = *(int **)(unaff_ESI + 0x10);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *piVar4 = 0;
  }
  guest_request_words[1] = UINT32_C(0xeb7a6be1);
  iVar3 = (**(code **)(*DAT_00443308 + 0x28))
              (DAT_00443308,&guest_request_words[1],piVar4);
  if (iVar3 < 0) {
    piVar2 = (int *)*piVar4;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *piVar4 = 0;
    }
    guest_request_words[1] = UINT32_C(0xe2c39ac2);
    guest_request_words[0] = UINT32_C(0xeb7a6be1);
    (**(code **)(*DAT_00443308 + 0x24))
              (DAT_00443308,&guest_request_words[0],&guest_request_words[1],0,piVar4);
  }
  piVar4 = (int *)(unaff_ESI + 0x14);
  piVar2 = *(int **)(unaff_ESI + 0x14);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *piVar4 = 0;
  }
  guest_request_words[1] = UINT32_C(0x1116be9c);
  iVar3 = (**(code **)(*DAT_00443308 + 0x28))
              (DAT_00443308,&guest_request_words[1],piVar4);
  if (iVar3 < 0) {
    piVar2 = (int *)*piVar4;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *piVar4 = 0;
    }
    guest_request_words[1] = UINT32_C(0x1bedf9a9);
    guest_request_words[0] = UINT32_C(0x1116be9c);
    (**(code **)(*DAT_00443308 + 0x24))
              (DAT_00443308,&guest_request_words[0],&guest_request_words[1],0,piVar4);
  }
  /* 0x000A4462/0x000A4467 reuse S-4 for this helper's address argument.
   * The helper's implicit ECX input is still unresolved by this C draft. */
  guest_request_words[1] = UINT32_C(0x0796c3b0);
  piVar4 = (int *)FUN_000a7770(&guest_request_words[1]);
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
