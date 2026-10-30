/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2808242F6229FF3AAFF957ABE457B8FB6B6441F5DACFBEE885339FC2515B23F
 * Entry: 0x0007e410, Ghidra index: 1496, label: FUN_0007e410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0001fed0(undefined4 *param_1,uint param_2);
extern void FUN_00087af0(void);
extern void FUN_001e88e0(int param_1,int param_2,int param_3);

extern uint32_t DAT_00400128;
extern uint32_t DAT_0040dc34;
extern uint32_t DAT_0040dc44;
extern uint32_t DAT_0040dc4c;
extern uint32_t *DAT_004432f8;
undefined1 FUN_0007e410(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined4 ****ppppuVar5;
  char *in_EDX;
  undefined1 uVar6;
  undefined4 unaff_EBX;
  undefined4 unaff_EDI;
  undefined4 ***local_154 [2];
  uint uStack_14c;
  undefined4 local_144;
  uint local_140;
  undefined1 local_13c [4];
  uint local_138;
  undefined4 local_128;
  uint local_124;
  undefined1 local_120 [4];
  uint local_11c;
  undefined4 local_10c;
  uint local_108;
  undefined1 local_104 [260];
  
  local_140 = 0xf;
  local_144 = 0;
  local_154[0] = (undefined4 ***)((uint)local_154[0] & 0xffffff00);
  pcVar2 = in_EDX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_0001fed0(in_EDX,(int)pcVar2 - (int)(in_EDX + 1));
  pcVar2 = &DAT_0040dc4c;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00087af0();
  local_108 = 0xf;
  local_10c = 0;
  local_11c = local_11c & 0xffffff00;
  pcVar2 = &DAT_0040dc44;
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  FUN_0001fed0(&DAT_0040dc44,pcVar3 + -0x40dc44);
  local_124 = 0xf;
  local_128 = 0;
  local_138 = local_138 & 0xffffff00;
  pcVar2 = &DAT_0040dc34;
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  FUN_0001fed0(&DAT_0040dc34,pcVar3 + -0x40dc34);
  FUN_001e88e0(&DAT_00400128,local_13c,local_120);
  if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_138);
  }
  local_128 = 0;
  local_138 = local_138 & 0xffffff00;
  local_124 = 0xf;
  if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_11c);
  }
  ppppuVar5 = (undefined4 ****)local_154[0];
  if (local_140 < 0x10) {
    ppppuVar5 = local_154;
  }
  iVar4 = (**(code **)(*DAT_004432f8 + 0x2c))(DAT_004432f8,local_104,ppppuVar5);
  uVar6 = 1;
  if (iVar4 != 0) {
    uVar6 = (undefined1)((uint)unaff_EDI >> 0x18);
  }
  if (0xf < uStack_14c) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_EBX);
  }
  return uVar6;
}
