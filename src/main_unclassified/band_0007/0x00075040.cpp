/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F1AAECFBF0A89AE58D8D5FF961A9BD5719C6DE224922ED404D2862770A2BCB24
 * Entry: 0x00075040, Ghidra index: 1341, label: FUN_00075040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00075510(uint *param_1);
extern void FUN_0008f6e0(std::uint32_t guest_edx);

int FUN_00075040(void)

{
  int iVar1;
  undefined4 *in_EAX;
  int *piVar2;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_4;
  
  local_1c = *in_EAX;
  local_18 = 0;
  local_17 = 0;
  local_16 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_4 = 0;
  piVar2 = (int *)FUN_00075510(&local_1c);
  iVar1 = *piVar2;
  if (local_4 != 0) {
    FUN_0008f6e0();
  }
  return iVar1 + 0x10;
}
