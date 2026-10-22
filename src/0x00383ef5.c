/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 07E27FB1E936CDA21059439DC4299964681A588B2611A75D448740FDC35C0F7C
 * Entry: 0x00383ef5, Ghidra index: 13636, label: FUN_00383ef5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412838;
extern uint32_t DAT_00412839;
extern uint32_t DAT_00412854;
extern uint32_t DAT_00412855;
extern uint32_t DAT_00412856;
extern uint32_t DAT_00412860;
extern uint32_t DAT_00412861;
extern uint32_t DAT_00412868;
extern uint32_t _DAT_00412840;
extern uint32_t _DAT_00412844;
extern uint32_t _DAT_00412848;
extern uint32_t _DAT_0041284c;
extern uint32_t _DAT_00412850;
extern uint32_t _DAT_00412862;
extern uint32_t _DAT_00412864;
extern uint32_t _DAT_00412866;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00383ef5(undefined4 param_1,byte param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  undefined2 uVar2;
  code *pcVar3;
  undefined4 local_8;
  
  iVar1 = FUN_00380fc4();
  uVar2 = 4;
  local_8 = 1;
  pcVar3 = FUN_00383b8d;
  if ((iVar1 == 0) || (*(byte *)(iVar1 + 2) < param_2)) {
    thunk_FUN_00382218(0x80000300,param_3);
  }
  else {
    DAT_00412868 = param_3;
    DAT_00412861 = 3;
    if (param_4 != '\0') {
      DAT_00412861 = 1;
      uVar2 = 1;
      pcVar3 = (code *)0x383bb9;
      local_8 = 2;
    }
    DAT_00412838 = 0x30;
    DAT_00412839 = 0x40;
    _DAT_00412844 = param_1;
    _DAT_00412848 = 0;
    _DAT_00412850 = 0;
    _DAT_0041284c = 0;
    DAT_00412854 = 0;
    DAT_00412855 = 0;
    DAT_00412856 = 0;
    DAT_00412860 = 0x23;
    _DAT_00412864 = (ushort)param_2;
    _DAT_00412866 = 0;
    _DAT_00412840 = pcVar3;
    _DAT_00412862 = uVar2;
    FUN_00383ce1(local_8);
    FUN_00381379(&DAT_00412838);
  }
  return;
}
