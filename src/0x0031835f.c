/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A5FEC8CF2D872C435D69168B1CC2D7D7DB4924629AA1C1D9BC5CB653ACCF5815
 * Entry: 0x0031835f, Ghidra index: 12194, label: FUN_0031835f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032ff48;
extern uint32_t _DAT_fe820010;
extern uint32_t _DAT_fe8202f8;
extern uint32_t _DAT_fe8202fc;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0031835f(void)

{
  int in_ECX;
  undefined4 uVar1;
  
  uVar1 = 0;
  FUN_003118f0();
  if (((*(byte *)(in_ECX + 0x12) & 1) != 0) &&
     ((*(uint *)((uint)*(ushort *)(in_ECX + 10 + (uint)*(byte *)(in_ECX + 100) * 2) * 0x80 + 0x54 +
                DAT_0032ff48) & 0x100000) == 0)) {
    do {
    } while ((_DAT_fe820010 & 0xfffffffc) < 0xc);
    _DAT_fe8202f8 = (uint)*(ushort *)(in_ECX + 0xc);
    _DAT_fe8202fc = 0;
    uVar1 = FUN_0031670a(*(uint *)((uint)*(ushort *)(in_ECX + 0xc) * 0x80 + 0x58 + DAT_0032ff48) &
                         0xffffff);
  }
  FUN_00311923();
  return uVar1;
}
