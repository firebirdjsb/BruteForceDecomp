/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06DDC190F0352090021E46ACE24011E3764D893890CDA39A3AF0752ED85FCCBF
 * Entry: 0x003161ec, Ghidra index: 12132, label: FUN_003161ec
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032fe98;
extern uint32_t PTR_FUN_00386a14;
extern uint32_t PTR_LAB_003869e0;
extern uint32_t PTR_LAB_00386a10;
void FUN_003161ec(void)

{
  ushort *puVar1;
  ushort *puVar2;
  int *piVar3;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00386a14;
  in_ECX[2] = &PTR_LAB_00386a10;
  FUN_00315b98();
  if (DAT_0032fe98 != 0) {
    KeDisconnectInterrupt(&DAT_0032fe98);
    DAT_0032fe98 = 0;
  }
  KeCancelTimer(in_ECX + 0x1c8);
  puVar1 = (ushort *)(in_ECX + 0x1c0);
  if (*puVar1 == 0x13) {
    KeRemoveQueueDpc(puVar1);
    *puVar1 = ~*puVar1;
  }
  puVar2 = (ushort *)(in_ECX + 0x1d2);
  if (*puVar2 == 0x13) {
    KeRemoveQueueDpc(puVar2);
    *puVar2 = ~*puVar1;
  }
  piVar3 = in_ECX + 0x1d9;
  if (*piVar3 != 0) {
    HalRegisterShutdownNotification(piVar3,0);
    *piVar3 = 0;
  }
  *(undefined4 *)in_ECX[0xa4] = 0;
  *(undefined4 *)in_ECX[0xa5] = 0;
  FUN_0031aa8e();
  FUN_00314d7c();
  FUN_0031bba1();
  *in_ECX = &PTR_LAB_003869e0;
  return;
}
