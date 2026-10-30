/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E07F8713CCCFA6AD55CA1E3A6C7DE289FDDE8E3BFF4ECA2ADE17C0E0F120A66
 * Entry: 0x0006bb60, Ghidra index: 1217, label: FUN_0006bb60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00155340(void);
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_0006b760(void);
extern undefined4 FUN_0006e3b0(void);

extern uint32_t PTR_FUN_003a2868;
extern uint32_t PTR_LAB_003a2810;
void FUN_0006bb60(int *param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  float10 fVar4;
  
  FUN_00155340();
  *in_EAX = &PTR_FUN_003a2868;
  in_EAX[0x12] = &PTR_LAB_003a2810;
  in_EAX[0x37] = 0;
  in_EAX[0x38] = 0;
  in_EAX[0x39] = 0;
  in_EAX[0x3a] = 0;
  in_EAX[0x3b] = 0;
  in_EAX[0x44] = 0x3f800000;
  in_EAX[0x40] = 0x3f800000;
  in_EAX[0x3c] = 0x3f800000;
  in_EAX[0x43] = 0;
  in_EAX[0x42] = 0;
  in_EAX[0x41] = 0;
  in_EAX[0x3f] = 0;
  in_EAX[0x3e] = 0;
  in_EAX[0x3d] = 0;
  in_EAX[2] = param_2;
  iVar1 = FUN_002ea01d(0x94);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0006b760();
  }
  in_EAX[0x14] = uVar2;
  in_EAX[0x32] = 0x428c0000;
  *(byte *)(in_EAX + 0x13) = *(byte *)(in_EAX + 0x13) & 0xfd;
  FUN_0006e3b0();
  if (param_1 == (int *)0x0) {
    in_EAX[0x34] = 0xffffffff;
    in_EAX[0x35] = 0xffffffff;
  }
  else {
    in_EAX[0x34] = param_1[2] - *param_1;
    in_EAX[0x35] = param_1[3] - param_1[1];
  }
  in_EAX[0x33] = in_EAX[0x32];
  uVar3 = in_EAX[0x47] & 0xfffffffe | 2;
  *(byte *)(in_EAX + 0x49) = *(byte *)(in_EAX + 0x49) | 0x7f;
  *(undefined1 *)((int)in_EAX + 0x116) = 0x7f;
  *(undefined1 *)((int)in_EAX + 0x119) = 0x7f;
  in_EAX[0x4a] = 0xbf800000;
  in_EAX[0x4c] = 0xbf800000;
  in_EAX[0x36] = 0;
  in_EAX[0x48] = 0;
  *(undefined1 *)(in_EAX + 0x45) = 0xff;
  *(undefined1 *)((int)in_EAX + 0x115) = 0xcc;
  *(undefined1 *)(in_EAX + 0x46) = 0xcc;
  *(undefined1 *)((int)in_EAX + 0x117) = 0xff;
  in_EAX[0x47] = (uVar3 * 4 ^ uVar3) & 0xc ^ uVar3;
  in_EAX[0x15] = 0;
  *(byte *)(in_EAX + 0x13) = *(byte *)(in_EAX + 0x13) & 0xc2;
  in_EAX[0x4b] = 0x3f800000;
  in_EAX[0x4d] = 0x3f800000;
  fVar4 = (float10)(**(code **)(*(int *)in_EAX[0x14] + 0x24))();
  in_EAX[0x4e] = (float)fVar4;
  fVar4 = (float10)(**(code **)(*(int *)in_EAX[0x14] + 0x28))();
  in_EAX[0x4f] = (float)fVar4;
  *(byte *)(in_EAX + 0x50) = *(byte *)(in_EAX + 0x50) & 0xfc;
  return;
}
