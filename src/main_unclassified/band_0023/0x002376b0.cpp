/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 182A0A5493F97A6505F8C8978400BC79F8797084AE111CC8363E0B3B776E45AE
 * Entry: 0x002376b0, Ghidra index: 7853, label: FUN_002376b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698f6;
extern uint32_t DAT_004698f8;
extern uint32_t DAT_004698fc;
extern uint32_t DAT_00469904;
extern uint32_t PTR_FUN_003bc650;
extern uint32_t PTR_FUN_003bc654;
extern uint32_t PTR_FUN_003bc658;
extern uint32_t UNK_00237810;
extern uint32_t UNK_002378a0;
extern uint32_t UNK_00237910;
extern uint32_t _DAT_0046cf88;
extern uint32_t _DAT_0046cf8c;
extern uint32_t _DAT_0046cf90;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002376b0(int param_1,int param_2,int param_3)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_4;
  
  if (DAT_004698f6 != '\0') {
    return 0;
  }
  DAT_00469904 = 0;
  if (in_EAX < 0x10) {
    FUN_00237670();
    iVar1 = param_2 * 0x10 + 0xfff;
    iVar1 = ((int)(iVar1 + (iVar1 >> 0x1f & 0xfffU)) >> 0xc) * 0x1000;
    if ((iVar1 != 0) && (iVar2 = XAPILIB__XPhysicalAlloc(iVar1,0xffffffff,0,4), iVar2 != 0)) {
      FUN_00258ec0(iVar1);
    }
    local_4 = 0;
    DAT_004698fc = in_EAX;
    if (0 < in_EAX) {
      piVar4 = (int *)(param_1 + 4);
      do {
        iVar1 = *piVar4;
        iVar1 = ((piVar4[1] * iVar1) / iVar1) * iVar1 + 0xfff;
        XAPILIB__VirtualAlloc(0,((int)(iVar1 + (iVar1 >> 0x1f & 0xfffU)) >> 0xc) << 0xc,0x901000,4);
        FUN_002374d0(piVar4[-1],piVar4[2]);
        piVar3 = &DAT_004698f8;
        if (DAT_004698f8 <= *piVar4) {
          piVar3 = piVar4;
        }
        DAT_004698f8 = *piVar3;
        local_4 = local_4 + 1;
        piVar4 = piVar4 + 4;
      } while (local_4 < DAT_004698fc);
    }
    if ((param_3 != 0) && (iVar1 = XAPILIB__VirtualAlloc(0,param_3,0x901000,4), iVar1 != 0)) {
      _DAT_0046cf8c = iVar1 + param_3;
      _DAT_0046cf88 = iVar1;
      _DAT_0046cf90 = iVar1;
    }
    PTR_FUN_003bc650 = &UNK_00237810;
    PTR_FUN_003bc654 = &UNK_00237910;
    PTR_FUN_003bc658 = &UNK_002378a0;
    DAT_004698f6 = 1;
    return 1;
  }
  return 0;
}
