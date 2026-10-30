/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0637D47E511230D78496D44F7254D65BDBFA5B89ABB8465605FB1418BE4749B4
 * Entry: 0x0023e2f0, Ghidra index: 7978, label: FUN_0023e2f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d004;
void FUN_0023e2f0(void)

{
  undefined4 in_EAX;
  int *piVar1;
  int *unaff_ESI;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  piVar1 = (int *)FUN_00235d50(in_EAX);
  unaff_ESI[1] = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    if (*(char *)(*piVar1 + 4) != '\0') {
      *unaff_ESI = *(int *)(*piVar1 + 8);
      FUN_0006ec90();
      unaff_ESI[2] = local_50;
      unaff_ESI[3] = iStack_4c;
      unaff_ESI[4] = iStack_48;
      unaff_ESI[5] = iStack_44;
      unaff_ESI[6] = local_40;
      unaff_ESI[7] = iStack_3c;
      unaff_ESI[8] = iStack_38;
      unaff_ESI[9] = iStack_34;
      unaff_ESI[10] = local_30;
      unaff_ESI[0xb] = iStack_2c;
      unaff_ESI[0xc] = iStack_28;
      unaff_ESI[0xd] = iStack_24;
      unaff_ESI[0xe] = local_20;
      unaff_ESI[0xf] = iStack_1c;
      unaff_ESI[0x10] = iStack_18;
      unaff_ESI[0x11] = iStack_14;
      goto LAB_0023e38e;
    }
    unaff_ESI[1] = 0;
  }
  unaff_ESI[0x10] = 0;
  unaff_ESI[0xf] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xb] = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[8] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[0x11] = 0x3f800000;
  unaff_ESI[0xc] = 0x3f800000;
  unaff_ESI[7] = 0x3f800000;
  unaff_ESI[2] = 0x3f800000;
LAB_0023e38e:
  if (*unaff_ESI == 0) {
    *unaff_ESI = (int)&DAT_0046d004;
  }
  return;
}
