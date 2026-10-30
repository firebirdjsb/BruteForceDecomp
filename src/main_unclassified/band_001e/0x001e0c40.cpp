/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C073920F151DFF7C2642FC61ECDCEC3692C16757874CE643BF70EC6BD740C863
 * Entry: 0x001e0c40, Ghidra index: 6719, label: FUN_001e0c40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original-address 0x0010BC40 is a void() Ghidra draft with implicit
 * EAX/ECX guest inputs. This declaration does not verify its Xbox ABI. */
extern void FUN_0010bc40(void);
int FUN_001e0c40(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    FUN_0010bc40();
    *(undefined4 *)(in_EAX + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(in_EAX + 0x14) = *(undefined4 *)(param_1 + 0x14);
    in_EAX = in_EAX + 0x18;
  }
  return in_EAX;
}
