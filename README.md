NSString-NSArrayFormatExtension
===============================

ceate NSString using stringWithFormat from NSArray

copy this below from https://github.com/groue/GRMustache/blob/master/src/classes/Services/StandardLibrary/GRMustacheLocalizer.m


 /**
     * NSString formatting methods do not accept an array of format arguments.
     
     *
     
     * Faking va_list as in http://stackoverflow.com/questions/688070/is-there-any-way-to-pass-an-nsarray-to-a-method-that-expects-a-variable-number-o
     
     * used to compile, but it does no longer:
     
     *
     *     id fake_va_list[arguments.count];
     
     *     [arguments getObjects:fake_va_list];
     
     *     rendering = [[[NSString alloc] initWithFormat:format arguments:(va_list)fake_va_list] autorelease];
     
     *                                                                    ^        ~~~~~~~~~~~~
     
     *     error: used type 'va_list' (aka '__builtin_va_list') where arithmetic or pointer type is required
     
     *
     
     * Removing the (va_list) cast only generates a warning, but the code crashes when run.
     
     *
     
     * NSInvocation? NSInvocation does not support variadic functions.
     
     *
     
     * So I guess we have to do it by hand :-(
     
     */
    
    NSUInteger count = arguments.count;

    id args[] = {
        (count > 0) ? [arguments objectAtIndex:0] : nil,
        (count > 1) ? [arguments objectAtIndex:1] : nil,
        (count > 2) ? [arguments objectAtIndex:2] : nil,
        (count > 3) ? [arguments objectAtIndex:3] : nil,
        (count > 4) ? [arguments objectAtIndex:4] : nil,
        (count > 5) ? [arguments objectAtIndex:5] : nil,
        (count > 6) ? [arguments objectAtIndex:6] : nil,
        (count > 7) ? [arguments objectAtIndex:7] : nil,
        (count > 8) ? [arguments objectAtIndex:8] : nil,
        (count > 9) ? [arguments objectAtIndex:9] : nil,
    };


Ugly code , so I have to search another path to achieve this.

Thank apple for wasting my time

