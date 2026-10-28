/* Explicit HOST representations of original x86 register pointer contracts.
 * The registers are not cdecl/fastcall host stack arguments in the XBE.
 * No guest memory translation or indirect-call ABI is supplied here.
 * The two original body hashes and entry names remain in source files.
 */
#ifndef BF_0011C810_REGISTER_CALLS_H
#define BF_0011C810_REGISTER_CALLS_H
void FUN_0001d0c0(const float *guest_eax_xyz3, float *guest_ecx_matrix9);
void FUN_0012b2a0(float *guest_eax_out3, const float *guest_ecx_vector3,
                    const float *guest_edx_matrix9);
#endif
