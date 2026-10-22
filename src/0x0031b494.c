/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 096B9882B5DD534A10FCBC8DE29B7130F73C079C2F2407393DA7551967120852
 * Entry: 0x0031b494, Ghidra index: 12297, label: FUN_0031b494
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032ff48;
extern uint32_t DAT_0032ff4c;
extern uint32_t DAT_0032ff5c;
extern uint32_t DAT_0032ff6c;
extern uint32_t DAT_0032ff7c;
extern uint32_t DAT_0032ff8c;
extern uint32_t DAT_0032ff9c;
extern uint32_t DAT_0032ffcc;
extern uint32_t PTR_DAT_0032f580;
extern uint32_t _DAT_fe80115c;
extern uint32_t _DAT_fe80202c;
extern uint32_t _DAT_fe802030;
extern uint32_t _DAT_fe802034;
extern uint32_t _DAT_fe802038;
extern uint32_t _DAT_fe80203c;
extern uint32_t _DAT_fe820010;
extern uint32_t _DAT_fe8202a0;
extern uint32_t _DAT_fe8202a4;
extern uint32_t _DAT_fe8202a8;
extern uint32_t _DAT_fe8202ac;
extern uint32_t _DAT_fe8202b0;
extern uint32_t _DAT_fe8202c0;
extern uint32_t _DAT_fe820804;
extern uint32_t _DAT_fe820808;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0031b494(void)

{
  uint uVar1;
  uint uVar2;
  
  do {
  } while ((_DAT_fe820010 & 0xfffffffc) < 0x20);
  uVar2 = 0;
  uVar1 = 0;
  do {
    *(uint *)(uVar1 + 0x7c + DAT_0032ff48) = uVar2 & 0xffff;
    uVar1 = uVar1 + 0x80;
    uVar2 = uVar2 + 1;
  } while (uVar1 < 0x8000);
  _DAT_fe80202c = DAT_0032ff4c;
  _DAT_fe802038 = DAT_0032ff8c;
  _DAT_fe80203c = DAT_0032ff9c;
  _DAT_fe802030 = DAT_0032ff6c;
  _DAT_fe802034 = DAT_0032ff7c;
  _DAT_fe80115c = DAT_0032ff5c;
  _DAT_fe8202a4 = 0xfff;
  _DAT_fe8202b0 = 0xfff;
  _DAT_fe8202a0 = 0xfff;
  _DAT_fe8202a8 = 0xfff;
  _DAT_fe8202ac = 0xfff;
  _DAT_fe820804 = 0x7ff;
  _DAT_fe820808 = DAT_0032ffcc;
  _DAT_fe8202c0 =
       (((*(uint *)(PTR_DAT_0032f580 + 0x18) & 0x1f) << 8 |
        *(uint *)(PTR_DAT_0032f580 + 0x10) & 0x1f) << 8 | *(uint *)(PTR_DAT_0032f580 + 8) & 0x1f) <<
       8 | *(uint *)PTR_DAT_0032f580 & 0x1f;
  return;
}
