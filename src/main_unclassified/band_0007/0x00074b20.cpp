/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E0C0EDAC66FE308501F163F1D4B7D382FF77870C10D0363721A4099746333A3D
 * Entry: 0x00074b20, Ghidra index: 1332, label: FUN_00074b20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
extern int FUN_00075040(void);
extern void FUN_00074be0(void);
extern void FUN_0008f6e0(std::uint32_t guest_edx);

void FUN_00074b20(void)

{
  int in_EAX;
  int *piVar1;
  int in_ECX;
  int local_20;
  int local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_4;
  
  if (*(int *)(in_ECX + 4) != 0) {
    local_20 = FUN_00075f00((uint *)(in_EAX + 4));
    if ((local_20 == *(int *)(in_ECX + 0x28)) || (*(uint *)(in_EAX + 4) < *(uint *)(local_20 + 0xc))
       ) {
      local_1c = *(int *)(in_ECX + 0x28);
      piVar1 = &local_1c;
    }
    else {
      piVar1 = &local_20;
    }
    if (*piVar1 == *(int *)(in_ECX + 0x28)) {
      local_4 = 0;
      local_18 = 0;
      local_17 = 0;
      local_14 = 0;
      local_16 = 0;
      local_10 = 0;
      local_c = 0;
      if (in_EAX != 0) {
        FUN_0008f6a0();
      }
      FUN_00075040();
      FUN_00074be0();
      if (local_4 != 0) {
        FUN_0008f6e0();
      }
    }
  }
  return;
}
