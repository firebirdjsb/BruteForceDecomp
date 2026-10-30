/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4DE0F586D14CF57E07622A06ADCCBC2015C79ECD0D0CD964E44C681C677389B0
 * Entry: 0x0026add0, Ghidra index: 8756, label: FUN_0026add0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x0026adfd) */

void FUN_0026add0(int *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int *piStack_c;
  int *local_8;
  
  iVar2 = (int)param_1;
  piVar1 = (int *)((int)param_1 + 4);
  piVar5 = (int *)0x0;
  if (*piVar1 == 0) {
    return;
  }
  param_1 = (int *)0x1e2160b3;
  if (*(int *)(*piVar1 + 0x58) == 0) {
    param_1 = (int *)0x1e2160b3;
    cVar3 = FUN_00253570();
    if (cVar3 == '\0') {
      return;
    }
  }
  piVar1 = *(int **)(*(int *)(iVar2 + 4) + 0x58);
  local_8 = (int *)0x0;
  cVar3 = FUN_0026aaf0(iVar2,0,&local_8);
  if (cVar3 == '\0') goto LAB_0026aed3;
  param_1 = (int *)0x0;
  piVar4 = (int *)(**(code **)(*piVar1 + 0x28))(piVar1,*(undefined4 *)(iVar2 + 4));
  piStack_c = piVar4;
  if (piVar4 == (int *)0x0) {
    cVar3 = FUN_00280100(&piStack_c);
    piVar4 = piStack_c;
    if (cVar3 != '\0') goto LAB_0026ae70;
  }
  else {
    (**(code **)(*piVar4 + 4))(piVar4);
LAB_0026ae70:
    /* Original XBE SHA-256 B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721.
     * 0x26AE70/77: FLD [EBP+18h], FMUL DWORD [003A4FF0] (3DCCCCCD).
     * 0x26AE84/88/8F: FSTP DWORD stack, MOV EAX from it, PUSH EAX.
     * 0x26AE8C/90: FLD [EBP+18h], FMUL DWORD [003A5014] (3F4CCCCD).
     * 0x26AE96/9A/9E/9F: FSTP DWORD stack, MOV ECX, PUSH ECX, PUSH EAX.
     * The three pushed scalar arguments are 32-bit float bit patterns, NOT
     * host pointers or promoted C doubles. The prior piStack_c remains a
     * pointer used as an out-parameter; it is not the floating-point slot.
     * ABI_UNVERIFIED: host pointer translation, x87 rounding and linked call. */
    {
      float tenth = *(float *)(iVar2 + 0x18) * 0.1f;
      float eight_tenths = *(float *)(iVar2 + 0x18) * 0.8f;
      uint32_t tenth_bits;
      uint32_t eight_tenths_bits;
      memcpy(&tenth_bits, &tenth, sizeof tenth_bits);
      memcpy(&eight_tenths_bits, &eight_tenths, sizeof eight_tenths_bits);
      cVar3 = FUN_00234b30(iVar2,piVar4,local_8,tenth_bits,eight_tenths_bits,
                           tenth_bits,0,&param_1);
    }
    piVar5 = param_1;
    if (cVar3 != '\0') {
      (**(code **)(*piVar1 + 0x2c))(piVar1,*(undefined4 *)(iVar2 + 4),param_1);
    }
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
LAB_0026aed3:
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return;
}
