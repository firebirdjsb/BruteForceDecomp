/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0298709C574C0E9086952FDDFF2013E633D62EC29B2630BE3B812F4DAF816A64
 * Entry: 0x0031bc46, Ghidra index: 12312, label: FUN_0031bc46
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fe801004;
extern uint32_t _DAT_fe801100;
extern uint32_t _DAT_fe801104;
extern uint32_t _DAT_fe801108;
extern uint32_t _DAT_fe80111c;
extern uint32_t _DAT_fe801124;
extern uint32_t _DAT_fe80112c;
extern uint32_t _DAT_fe801130;
extern uint32_t _DAT_fe801138;
extern uint32_t _DAT_fe801140;
extern uint32_t _DAT_fe801144;
extern uint32_t _DAT_fe801150;
extern uint32_t _DAT_fe801154;
extern uint32_t _DAT_fe801158;
extern uint32_t _DAT_fe801500;
extern uint32_t _DAT_fe801504;
extern uint32_t _DAT_fe801508;
extern uint32_t _DAT_fe80150c;
extern uint32_t _DAT_fe802000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0031bc46(void)

{
  undefined4 extraout_EDX;
  
  _DAT_fe801004 = 0xd8;
  _DAT_fe801100 = 0x88;
  _DAT_fe802000 = 0;
  _DAT_fe801500 = 0;
  _DAT_fe801504 = 0x8000;
  _DAT_fe801508 = 0x800040;
  _DAT_fe80150c = 0;
  FUN_0031bae8();
  _DAT_fe801104 = 0xff;
  _DAT_fe801108 = 0x3f;
  _DAT_fe80111c = 0x7f;
  _DAT_fe801124 = 0x1fff;
  _DAT_fe801138 = 0x7ff;
  _DAT_fe801158 = 0x20;
  _DAT_fe801130 = 0x8000000;
  _DAT_fe801144 = 0x8000000;
  _DAT_fe801154 = 0x8000000;
  _DAT_fe80112c = extraout_EDX;
  _DAT_fe801140 = extraout_EDX;
  _DAT_fe801150 = extraout_EDX;
  FUN_0031b901(extraout_EDX);
  FUN_0031b938(1);
  FUN_0031b938(2);
  FUN_0031b993(4);
  return;
}
