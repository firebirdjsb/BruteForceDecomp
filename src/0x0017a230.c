/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 524540FD9EF1F8E94A2C9F7E439E1E1017E7ECA67B9C3FCF8AE33EC48B5BBF87
 * Entry: 0x0017a230, Ghidra index: 5003, label: FUN_0017a230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0017a230(void)

{
  int *in_EAX;
  int *in_ECX;
  
  if ((*in_ECX == *in_EAX) && ((char)in_ECX[1] == (char)in_EAX[1])) {
    return 1;
  }
  return 0;
}
