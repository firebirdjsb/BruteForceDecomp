/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 25DE7E4D4B2AA9A018708C30807FA4083E188615F64F1454119A751BAEF7B6D3
 * Entry: 0x0031c741, Ghidra index: 12339, label: FUN_0031c741
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032fdf8;
void FUN_0031c741(void)

{
  ushort *puVar1;
  int *piVar2;
  int in_ECX;
  uint uVar3;
  
  uVar3 = 0;
  FUN_003118f0();
  if (DAT_0032fdf8 != 0) {
    KeDisconnectInterrupt(&DAT_0032fdf8);
    DAT_0032fdf8 = 0;
  }
  puVar1 = (ushort *)(in_ECX + 0x1c);
  if (*puVar1 == 0x13) {
    KeRemoveQueueDpc(puVar1);
    *puVar1 = ~*puVar1;
  }
  piVar2 = (int *)(in_ECX + 0xc);
  if (*piVar2 != 0) {
    HalRegisterShutdownNotification(piVar2,0);
    *piVar2 = 0;
  }
  do {
    FUN_0031c702(uVar3);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  FUN_00311923();
  return;
}
