## Windows RPC Example

This repository is a companion document to the blog available at [TrustedSec](https://trustedsec.com/blog/rpc-programming-for-the-aspiring-windows-developer) Its main purpose is to help show what an example of calling an RPC function from the generated code of an IDL might look like.

Once you open the solution you will find two projects

### MS-lsat-poc

This project simply makes two calls to aquire a policy object handle and then attempt to translate a couple service names to sids.  Succesfull translation means the service exists on the target machine.  This can be done at a user level as of the writing of this post.

The reason this works is because since windows vista every windows service has an associated virtual account created with the same name as the service itself.  We can take advantage of this to see if a service with a known name exists.  If you want to see how true this is use `sc create` to create a service on your windows machine and then call `sc showsid` on that service to see the virtual account's sid.

### WindowsRpcHelper

This project is a static library that goes largely unused in the MS-lsat-poc.  It provides a framework to help with prototyping more standard smb based rpc connections.  The main function from this library is `make_rpc_request`.  It takes all the arguments required to bind an rpc connection and then on success calls a callback function you specify, passing in a va_list that can be unpacked using va_arg.

### Credits

[reactos project](https://github.com/reactos/reactos)

[mimikatz](https://github.com/gentilkiwi/mimikatz)


This project will not be maintained beyond its intial release.  Its intended purely as a learning tool with the released blog, and as a helper for others learning RPC.  Any pull requests to this repository will be closed without review.
