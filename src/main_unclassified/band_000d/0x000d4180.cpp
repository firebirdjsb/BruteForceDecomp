/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 34CC59931D6A95458F8889484C0702A2F7F515719C889F1CBC5F5A1F4F2B26BF
 * Entry: 0x000d4180, Ghidra index: 2640, label: FUN_000d4180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d4180(void)

{
  int in_EAX;
  undefined4 local_4;
  
  if (*(char *)(in_EAX + 0xb45) == '\0') {
    *(undefined1 *)(in_EAX + 0xb45) = 1;
    FUN_002385a0();
    local_4 = 1;
    FUN_0006a610(&local_4);
    local_4 = 0x1e01;
    FUN_0006a610(&local_4);
    local_4 = 0xff;
    FUN_0006a610(&local_4);
  }
  return;
}
