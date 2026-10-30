/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E60C5B9549F2A70E5FA9A9D685A5AF447C0D4937983C0674EE542BD14FF1FB1
 * Entry: 0x0038099a, Ghidra index: 13536, label: FUN_0038099a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0041267a;
extern uint32_t DAT_00412684;
extern uint32_t DAT_00412685;
extern uint32_t DAT_00412686;
extern uint32_t DAT_00412689;
extern uint32_t DAT_0041268a;
extern uint32_t DAT_0041268b;
extern uint32_t DAT_004126d0;
void FUN_0038099a(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  int unaff_retaddr;
  
  KeCancelTimer(&DAT_004126d0);
  if ((((*(int *)(unaff_retaddr + 4) < 0) || (*(uint *)(unaff_retaddr + 0x14) < 8)) ||
      (DAT_00412684 < 8)) || ((DAT_00412685 != 'B' || (DAT_00412686 == 0)))) {
    FUN_003808de(unaff_retaddr,param_1);
  }
  else {
    iVar2 = XAPILIB__GetTypeInformation_8();
    *(int *)((int)param_1 + 0xe) = iVar2;
    *(undefined1 *)((int)param_1 + 0xb) = DAT_00412689;
    *(byte *)(param_1 + 3) = DAT_0041268a;
    bVar1 = DAT_0041268b;
    *(byte *)((int)param_1 + 0xd) = DAT_0041268b;
    if ((((iVar2 == 0) || (DAT_0041268a < 2)) ||
        ((0x20 < DAT_0041268a || (*(byte *)((int)param_1 + 6) < *(byte *)(param_1 + 3))))) ||
       ((*(char *)((int)param_1 + 9) != '\0' && (*(byte *)((int)param_1 + 7) < bVar1)))) {
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfe;
      *param_1 = 0;
      DAT_0041267a = DAT_0041267a + -1;
      FUN_00380fc8(0);
      FUN_0038274f(0x80000400);
    }
    else {
      FUN_00380fd9(*(undefined1 *)((int)param_1 + 10));
      FUN_0038274f(0);
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 8;
    }
  }
  return;
}
