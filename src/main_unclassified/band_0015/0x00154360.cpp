/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2923AF36E5DB7A7B4FA1A491187EAFFA26BF804F865EDD4245F71C930268A7CD
 * Entry: 0x00154360, Ghidra index: 4434, label: FUN_00154360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source draft 0x00154420 uses implicit guest EAX/ECX object registers.
 * This declaration matches source arity only; Xbox ABI_UNVERIFIED. */
extern void FUN_00154420(void);
int FUN_00154360(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x54) {
    FUN_00154420();
    in_EAX = in_EAX + 0x54;
  }
  return in_EAX;
}
