/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4C17E2653D6190864517637D807D5034FDF05220E32AE1E263F7F33A4189D8F0
 * Entry: 0x00147dd0, Ghidra index: 4245, label: FUN_00147dd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_00147dd0(void)

{
  char cVar1;
  byte bVar2;
  int in_EAX;
  
  if (*(float *)(in_EAX + 0x14) < 1.0) {
    if ((*(byte *)(in_EAX + 0xc) & 2) == 0) {
      if (*(int *)(in_EAX + 0x18) != 0) {
        cVar1 = (**(code **)(*DAT_00469940 + 0x2c))(*(int *)(in_EAX + 0x18));
        if (cVar1 == '\0') {
          FUN_00147b90();
        }
      }
    }
    else {
      FUN_00147d70();
    }
  }
  else {
    FUN_00147bc0();
  }
  if (*(int *)(in_EAX + 0x18) != 0) {
    bVar2 = FUN_0022dcc0();
    if (bVar2 != (*(byte *)(in_EAX + 0xc) >> 3 & 1)) {
      FUN_00147c20(in_EAX + 0x1c,*(byte *)(in_EAX + 0xc) >> 1 & 1);
    }
  }
  return;
}
