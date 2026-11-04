/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0B72EA4B98CD3514D4CFF758084048EA92B60DE07FF92F73121C2C6E18C3A25
 * Entry: 0x00317da9, Ghidra index: 12188, label: FUN_00317da9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched draft declarations; guest ECX/register and Xbox ABI_UNVERIFIED. */
extern void FUN_003118f0(void);
extern void FUN_00318d9f(void);
extern void FUN_00311923(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fe820010;
extern uint32_t _DAT_fe82012c;
extern uint32_t _DAT_fe8202f8;
extern uint32_t _DAT_fe820304;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00317da9(void)

{
  ushort *puVar1;
  int in_ECX;
  uint uVar2;
  
  FUN_003118f0();
  if ((*(byte *)(in_ECX + 0x12) & 3) == 3) {
    FUN_00318d9f();
    *(byte *)(in_ECX + 0x16) = *(byte *)(in_ECX + 0x16) & 0x7f;
    do {
    } while (_DAT_fe820010 >> 2 < (uint)*(byte *)(in_ECX + 100) * 3);
    uVar2 = 0;
    if (*(byte *)(in_ECX + 100) != 0) {
      puVar1 = (ushort *)(in_ECX + 0xc);
      do {
        _DAT_fe8202f8 = (uint)*puVar1;
        _DAT_fe820304 = *(uint *)(in_ECX + 0x14);
        if (uVar2 != 0) {
          _DAT_fe820304 = _DAT_fe820304 | 0x400000;
        }
        _DAT_fe82012c = (uint)*puVar1;
        uVar2 = uVar2 + 1;
        puVar1 = puVar1 + 1;
      } while (uVar2 < *(byte *)(in_ECX + 100));
    }
  }
  FUN_00311923();
  return;
}
