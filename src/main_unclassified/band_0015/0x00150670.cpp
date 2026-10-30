/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0D3C6B7439645CC9181DCA295191FF231E6F4C2CC2A7561CE4774997FC06E326
 * Entry: 0x00150670, Ghidra index: 4406, label: FUN_00150670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
undefined4 FUN_00150670(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  float10 fVar4;
  undefined1 unaff_retaddr;
  char cStack0000000c;
  float guest_angle; /* x87 ST(0) stored as a 32-bit IEEE-754 stack argument */
  uint32_t guest_out_word = 0; /* initialized by MOV [ESP+8],EBX before callback */
  
  piVar1 = param_1;
  (**(code **)(**(int **)(unaff_ESI + 0x5a4) + 0xcc))(*unaff_EDI);
  param_1 = *(int **)(unaff_ESI + 0x5b0);
  if (((*(byte *)((int)unaff_EDI + 0x252) & 1) != 0) &&
     (param_1 = *(int **)(*(int *)(unaff_ESI + 0x2e8) + 0x1cc), param_1 == (int *)0x0)) {
    param_1 = *(int **)(unaff_ESI + 0x7e4);
  }
  if (*(char *)((int)unaff_EDI + 0x253) == '\x01') {
    cStack0000000c = '\0';
  }
  else {
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
    cStack0000000c = (char)(DAT_0046cfd8 % (uint)*(byte *)((int)unaff_EDI + 0x253));
  }
  *(char *)(unaff_ESI + 0x224) = cStack0000000c;
  iVar2 = FUN_00117270();
  iVar2 = iVar2 + -6 + (int)param_1 * 6;
  if (param_2 != '\0') {
    iVar2 = iVar2 + 0xc;
  }
  if (cStack0000000c != '\0') {
    iVar2 = iVar2 + 0x18;
  }
  *(int *)(unaff_ESI + 0x220) = iVar2;
  piVar3 = unaff_EDI + iVar2 * 3 + 2;
  iVar2 = *piVar3;
  if (iVar2 != 0) {
    if (0.0 <= *(float *)(unaff_ESI + 0x434)) {
      fVar4 = (float10)FUN_0001fae0(*(float *)(unaff_ESI + 0x434) + 3.1415927);
      guest_angle = (float)fVar4;
    }
    else {
      guest_angle = -1.0f;
    }
    iVar2 = FUN_0023d240(*(undefined4 *)(unaff_ESI + 500),iVar2 + 0x14,&guest_out_word,guest_angle);
    *(int *)(unaff_ESI + 0x21c) = iVar2;
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      *(byte *)(unaff_ESI + 0x261) = *(byte *)(unaff_ESI + 0x261) & 0xfd;
      *(undefined4 **)(unaff_ESI + 0x1fc) = unaff_EDI;
      *(undefined4 *)(unaff_ESI + 0x1f8) = *unaff_EDI;
      iVar2 = unaff_EDI[0x93];
      if (iVar2 != 0) {
        *piVar1 = iVar2;
        piVar1[2] = *(int *)(unaff_EDI[0x93] + 0x254);
        piVar1[3] = 0;
        *(undefined1 *)((int)piVar1 + 5) = 0;
        *(undefined1 *)(piVar1 + 1) = 0;
        return CONCAT31((int3)((uint)iVar2 >> 8),1);
      }
      if ((*(byte *)(unaff_EDI + 0x94) & 1) != 0) {
        *piVar1 = (int)unaff_EDI;
        piVar1[2] = 0;
        piVar1[3] = 0;
        *(undefined1 *)((int)piVar1 + 5) = 0;
        *(undefined1 *)(piVar1 + 1) = 0;
        return 1;
      }
      piVar1[2] = 0x3f800000;
      iVar2 = *(int *)(unaff_ESI + 0xc);
      *piVar1 = *(int *)(iVar2 + 0x2b8);
      piVar1[3] = 0;
      *(undefined1 *)((int)piVar1 + 5) = 0;
      *(undefined1 *)(piVar1 + 1) = 0;
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return CONCAT31((int3)((uint)piVar3 >> 8),unaff_retaddr);
}
