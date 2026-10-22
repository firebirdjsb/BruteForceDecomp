/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ABF0156753A7E3EA0BB51700738644188BBBF13547F9E3591E6A749D92F1E570
 * Entry: 0x002329e0, Ghidra index: 7770, label: FUN_002329e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469924;
extern char s_someone_is_using_get_string_0040dbb4[];
void FUN_002329e0(void)

{
  char cVar1;
  int *in_EAX;
  char *pcVar2;
  
  if (DAT_00469924 == 0) {
    XAPILIB__OutputDebugStringA(s_someone_is_using_get_string_0040dbb4);
    pcVar2 = (char *)0x0;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00252c60();
    (**(code **)(*in_EAX + 0x14))();
    return;
  }
  (**(code **)(*in_EAX + 0x14))();
  return;
}
