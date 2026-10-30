/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5FA2203370EC405E1DC3EBD5668A8F80FE3B30332BA5D7FDE4C68EC8ABE54C2C
 * Entry: 0x0037ee7c, Ghidra index: 13492, label: MU_Init
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037edc8;
extern uint32_t DAT_0037edc9;
extern uint32_t DAT_0037edcf;
extern uint32_t DAT_0040f660;
extern uint32_t DAT_0040f664;
extern uint32_t DAT_0040f668;
extern uint32_t DAT_0041266c;
extern uint32_t PTR_FUN_0037edd8;
extern char s__Device_MU_0_0038630c[];
void XAPILIB__MU_Init(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  puVar6 = &DAT_0040f660;
  for (iVar3 = 0xc04; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  DAT_0040f668 = &DAT_0040f664;
  DAT_0040f664 = &DAT_0040f664;
  DAT_0041266c = (undefined4 *)FUN_00382086(0x60,0x5f5f554d);
  puVar6 = DAT_0041266c;
  for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  iVar3 = FUN_0037f2c2();
  if (iVar3 == 0) {
    /* XBE 0x0037EECC: push original guest device-type descriptor
     * address 0x0037EDA0. Descriptor layout remains unverified. */
    iVar3 = IUsbInit_GetMaxDeviceTypeCount(
        (const void *)(uintptr_t)UINT32_C(0x0037EDA0));
    uVar4 = iVar3 + 1;
    if (uVar4 < 9) goto LAB_0037eee1;
  }
  uVar4 = 8;
LAB_0037eee1:
  RtlInitAnsiString(local_10,s__Device_MU_0_0038630c);
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      cVar2 = (char)uVar5 + 'A';
      if (uVar5 < 10) {
        cVar2 = (char)uVar5 + '0';
      }
      *(char *)(local_c + 0xb) = cVar2;
      iVar3 = IoCreateDevice(&PTR_FUN_0037edd8,0x170,local_10,0x3a,0,&local_8);
      if (iVar3 < 0) break;
      piVar1 = *(int **)(local_8 + 0x18);
      piVar7 = piVar1;
      for (iVar3 = 0x5c; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar7 = 0;
        piVar7 = piVar7 + 1;
      }
      *piVar1 = local_8;
      piVar1[1] = uVar5;
      piVar1[3] = 4;
      *(undefined1 *)(local_8 + 0x1e) = 1;
      *(uint *)(local_8 + 0x14) = *(uint *)(local_8 + 0x14) | 4;
      *(uint *)(local_8 + 0x14) = *(uint *)(local_8 + 0x14) & 0xffffffef;
      FUN_0037fe55(piVar1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  DAT_0037edc9 = (undefined1)uVar4;
  if (1 < uVar4) {
    DAT_0037edcf = DAT_0037edcf << 1;
  }
  FUN_0037f2ce(&DAT_0037edc8);
  return;
}
