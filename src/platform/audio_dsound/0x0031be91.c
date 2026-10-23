/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7FE2458A977E274AEB53E1C31D045C1BD3AE786B916DEFAD0C871134353267EB
 * Entry: 0x0031be91, Ghidra index: 12314, label: FUN_0031be91
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032ff58;
extern uint32_t _DAT_fe801100;
extern uint32_t _DAT_fe802000;
extern uint32_t _DAT_fe820010;
extern uint32_t _DAT_fe820104;
extern uint32_t _DAT_fe82010c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0031be91(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  FUN_003118f0();
  if (param_1 == 0) {
    do {
    } while ((_DAT_fe820010 & 0xfffffffc) < 4);
    _DAT_fe82010c = 1;
  }
  else {
    param_1 = 0;
    if (((_DAT_fe801100 & 0xe0) == 0) && ((_DAT_fe802000 & 0x18) != 0)) {
      param_1 = 1;
      do {
      } while ((_DAT_fe820010 & 0xfffffffc) < 4);
      _DAT_fe82010c = 0;
      if (DAT_0032ff58 == 0) {
        KeStallExecutionProcessor(0x29b);
      }
      else {
        FUN_003174e7();
        _DAT_fe820104 = 2;
        iVar2 = 0x29b;
        do {
          iVar1 = FUN_003166d3(0);
          if (iVar1 != 0) break;
          KeStallExecutionProcessor(1);
          bVar3 = iVar2 != 0;
          iVar2 = iVar2 + -1;
        } while (bVar3);
        FUN_003174e7();
      }
    }
  }
  FUN_00311923();
  return param_1;
}
